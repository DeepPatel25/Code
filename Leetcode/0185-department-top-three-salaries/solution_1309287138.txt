WITH UniqueSalaries AS (
    SELECT 
        e.departmentId,
        e.salary,
        DENSE_RANK() OVER (PARTITION BY e.departmentId ORDER BY e.salary DESC) AS salary_rank
    FROM 
        Employee e
    GROUP BY 
        e.departmentId, e.salary
),
TopSalaries AS (
    SELECT 
        departmentId,
        salary
    FROM 
        UniqueSalaries
    WHERE 
        salary_rank <= 3
)
SELECT 
    d.name AS Department, 
    e.name AS Employee, 
    e.salary AS Salary
FROM 
    Employee e
JOIN 
    Department d ON e.departmentId = d.id
JOIN 
    TopSalaries ts ON e.departmentId = ts.departmentId AND e.salary = ts.salary
ORDER BY 
    d.name, e.salary DESC;
