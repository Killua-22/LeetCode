# Write your MySQL query statement below
select w1.id from Weather w1 left join Weather w2 on date(w1.recordDate) = date(w2.recordDate + interval 1 day) where w2.temperature < w1.temperature