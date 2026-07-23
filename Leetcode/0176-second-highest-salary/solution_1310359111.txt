Select max(salary)  AS SecondHighestSalary from employee
where salary<(select max(salary) from employee);