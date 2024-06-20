SELECT
    SUBSTR (t.trans_date, 1, 7) AS month,
    country,
    COUNT(t.id) AS trans_count,
    SUM(IF (t.state = "approved", 1, 0)) AS approved_count,
    SUM(t.amount) AS trans_total_amount,
    SUM(IF (t.state = "approved", t.amount, 0)) AS approved_total_amount
FROM
    Transactions AS t
GROUP BY
    month,
    country