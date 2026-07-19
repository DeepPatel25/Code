# Write your MySQL query statement below
Select name from Employee 
# Group by managerId;
Where managerId is null
group by managerid 
having count(managerid)>=5 AND managerid is null;

