UPDATE	
	EMPLEADOS
SET
	SUELDO = SUELDO * 1.1
WHERE
	SUELDO * 1.1 < 1900;

SELECT * FROM EMPLEADOS;