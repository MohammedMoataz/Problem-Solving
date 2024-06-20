SELECT
    e.employee_id,
    e.name,
    COUNT(z.reports_to) AS reports_count,
    ROUND(AVG(z.age)) AS average_age
FROM
    Employees e
    JOIN Employees z ON e.employee_id = z.reports_to
GROUP BY
    e.employee_id
ORDER BY
    e.employee_id;