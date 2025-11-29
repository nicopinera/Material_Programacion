-- Definiciones
	-- query es una consulta
	-- campos son columnas
	-- registros son filas de datos

-- Cargo valores
	-- le tengo que decir que parametros voy a cargar
INSERT INTO usuarios (Nombre,Apellido,Edad) 
VALUES ('Nicolas','Piñera',22),('Geldre','OrcaMorada',28);

-- selecciono todo de una tabla
SELECT * FROM usuarios