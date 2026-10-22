# Write your MySQL query statement below
select e.name as "Employee" from employee as e left join employee as t on e.managerId=t.id where e.salary>t.salary;