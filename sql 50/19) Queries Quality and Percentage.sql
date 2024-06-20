SELECT
    q.query_name,
    ROUND(AVG(q.rating / q.position), 2) AS quality,
    IFNULL (ROUND(AVG(q.rating < 3) * 100, 2), 0) AS poor_query_percentage
FROM
    Queries AS q
WHERE
    q.query_name IS NOT NULL
GROUP BY
    q.query_name