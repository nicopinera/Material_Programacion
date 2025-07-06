# String - Cadenas de Texto
Las cadenas de texto son secuencias de caracteres.
No es un tipo de dato primitivo, es una clase que forma parte del propio lenguaje

---

## Declaracion
Se puede declarar un String de dos formas:
- Forma 1: igual que declaramos una variable

``String nombre = "Nico";``

- Forma 2: Ya que es una clase, accediendo al constructor de la misma

``var apellido = new String("Piñera");``

---

## Operaciones basicas
Como es una clase, tiene diferentes metodos que nos sirven como operaciones. 
1. **Concatenacion**: Se puede concatenar String utilizando el `+`. Por ejemplo

``System.out.println(nombre + " " + apellido);``

2. **Longitud**: Para saber la longitud de una cadena se utiliza el metodo ``.length()``. Por ejemplo:

``nombre.length()``

3. Obtener un caracter: Se utiliza el metodo `.charAt()` el cual nos devuelve el caracter en la posicion o indice que se le pase por parametro. El indice puede ir desde [0,length()-1]. Por ejemplo:

``nombre.charAt(i)``

``nombre.charAt(nombre.length()-1)``

4. SubCadena: Hay dos opciones
    1. Generar una subCadena desde el indice hasta el final de la cadena original ``nombre.substring(i)``
    2. Generar una subcadena desde el indice inicial hasta el final ``nombre.substring(2,4)``

5. Pasar a mayusculas y minusculas:
    1. Mayusculas: ``nombre.toUpperCase()``
    2. Minusculas: ``nombre.toLowerCase()``

6. Comprobar si tiene...: Se utiliza el metodo ``"Hola,java".contains("Nico")``  Devuelve verdadero o falso si la cadena contiene lo que le pasamos por parametro, debe tener coincidencia total. Por lo general se pasan las cadenas a mayusculas para evitar errores.

7. Comparacion: ``cadena1.equals(Cadena2) `` o ``cadena1.equalsIgnoreCase(Cadena2)`` para ignorar mayusculas o minusculas

8. Limpiar espacios al principio y al final ``.trim()``

9. Reemplazar caracteres especificos: ``cadena1.replace(target, replacement)``

