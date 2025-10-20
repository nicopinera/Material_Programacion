CREATE "users"(
    Nombre TEXT,
    Apellido TEXT,
    Edad INTEGER
)
/* Utilizando bases de datos*/

/* INSERT SIRVE PARA GUARDAD VALORES EN UNA TABLA ESPECIFICA*/
INSERT INTO users (Nombre,Apellido,Edad) VALUES ('Nico','Piñera',22),('Lucas','Dalto',23);

/* EL SELECT ME SIRVE PARA SELECCIONAR CAMPOS ESPECIFICOS D UNA TABLA*/
SELECT * FROM users;

