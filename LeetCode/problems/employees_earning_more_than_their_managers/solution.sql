# Write your MySQL query statement below

select E.name as Employee from
Employee E  JOIN  Employee F
on (    
    E.managerId = F.id 
    AND E.salary > F.salary 
    AND F.salary IS NOT NULL
)