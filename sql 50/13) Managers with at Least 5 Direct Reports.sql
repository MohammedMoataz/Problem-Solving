SELECT
    org.name
FROM
    Employee AS org
    JOIN (
        SELECT
            managerId
        FROM
            Employee
        GROUP BY
            managerId
        HAVING
            COUNT(managerId) >= 5
    ) AS cpy ON org.id = cpy.managerId;