SELECT
    r.contest_id,
    ROUND(
        COUNT(r.user_id) * 100 / (
            SELECT
                COUNT(*)
            FROM
                Users
        ),
        2
    ) AS percentage
FROM
    Register r
    JOIN Users u ON r.user_id = u.user_id
GROUP BY
    r.contest_id
ORDER BY
    percentage DESC,
    contest_id ASC;