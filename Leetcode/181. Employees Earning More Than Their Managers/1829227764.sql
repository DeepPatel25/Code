# Write your MySQL query statement below
select em.name as 'Employee'
from employee em
join employee e on em.managerId = e.Id
where em.salary > e.salary