import os

os.system("cls")
os.system("clear")
# Esto es un comentario: Hola mundo
saludo = "Hola mundo"
nombre = input("Ingrese su nombre: ")
print(saludo + " " + nombre)

print("---" * 3)
print("Hola mundo")
print("Hola python")

""""
Comentario
de varias
lineas
"""

"""
Esto tambien
es un comentario
de varias lineas
"""

"""
Type se usa para consultar el tipo de dato que le
pasamos por parametro
"""
# Tipos de datos
print("---" * 3)
print("Tipos de datos")
print("Tipo entero: " + str(type(2)))  # Tipo 'int'
print("Tipo string: " + str(type("hola mundo")))  # Tipo 'str'
print("Tipo float: " + str(type(1.5)))  # Tipo 'Float'
print("Tipo booleano: " + str(type(True)))  # Tipo 'bool'
print("Tipo complejo: " + str(type(1 + 1j)))  # Tipo 'complex'
print("---" * 3)
print("Ingresar un valor: ")
## Input
edad = int(input("edad? "))
