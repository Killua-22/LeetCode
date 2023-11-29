# Write your MySQL query statement below
SELECT contest_id, ROUND(COUNT(user_id) * 100 / (SELECT COUNT(*) FROM Users), 2) AS percentage
FROM Register r
GROUP BY contest_id
ORDER BY percentage desc, contest_id;