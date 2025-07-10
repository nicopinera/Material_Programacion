import os
import math
from math import pi as PI_VALOR
import random
import my_module
from my_module import sum  # exportar una sola funcion

os.system("cls")

### Modulos ###
"librerias"


my_module.mostrar("Hola")
my_module.sum(1, 2, 3)

sum(3, 4)  # no hace falta usar  my_module


print(math.sqrt(25))
print(math.log(35, 2))
print(PI_VALOR)
math.e

print(int(random.random() * 100))

print("Programa terminado")
