# Write your MySQL query statement below
select e.firstName , e.lastName , d.city , d.state from Person as e left join Address as d on e.personId=d.personId;
