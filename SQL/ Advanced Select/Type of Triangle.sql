SELECT 
    CASE WHEN A + B <= C THEN 'Not A Triangle' 
         WHEN A = B AND B = C THEN 'Equilateral'
         WHEN A = B OR B = C OR C = A THEN 'Isosceles'
    ELSE 'Scalene'
    END AS TRIANGLE_TYPES
FROM TRIANGLES;
