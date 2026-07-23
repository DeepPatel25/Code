# Write your MySQL query statement below
select u.name NAME, sum(t.amount) BALANCE from users u inner join transactions t on u.account = t.account group by u.account having sum(t.amount) > 10000;