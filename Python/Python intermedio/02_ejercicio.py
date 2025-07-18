import os

os.system("cls")

""" 
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
"""

for i in range(1, 101):
    if i % 3 == 0 and i % 5 == 0:
        print(f"{i}) fizzbuzz")
    elif i % 3 == 0:
        print(f"{i}) fizz")
    elif i % 5 == 0:
        print(f"{i}) buzz")
    else:
        print(f"{i}) {i}")

# 1:11:25


def anagrama(palabra1, palabra2):
    if palabra1 == palabra2:
        return False
    return sorted(palabra1) == sorted(palabra2)


print(anagrama("Hola", "Hola"))
