# Write your MySQL query statement below
SELECT x, y, z,  
    CASE WHEN ABS(x-y) < z AND z < x+y THEN 'Yes'
    ELSE 'No' END AS Triangle
FROM Triangle 


