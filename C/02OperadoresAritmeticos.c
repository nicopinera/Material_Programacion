#include <stdio.h>
// Operadores Matematicos
/*
+ = suma
- = resta
* = Multiplicacion
/ = division
% = Modulo
++ = Incremento 1
-- = Decremento 1

*/
int main()
{
    int num1;
    int num2;
    int resultado;
    float resDivision;
    int a = 12, b = 3; // Declaro los valores en la misma linea
    float c = 1.2;
    double d = 10;

    printf("Ingrese el primer valor: \n");
    /*scanf() recibe dos parametros
    uno es el tipo de dato, en este caso %d representa el numero decimal
    y la ruta donde se va a guardar el valor ingresado
    se coloca el & que marca la direccion
    */
    scanf("%d", &num1);
    printf("Ingrese el segundo valor: \n");
    scanf("%d", &num2);

    resultado = num1 + num2; // Operacion de Suma
    printf("El resultado de la suma es: %d \n", resultado);

    resultado = num1 - num2; // Operacion de Resta
    printf("El resultado de la resta es: %d \n", resultado);

    resultado = num1 * num2; // Operacion de Multiplicacion
    printf("El resultado de la multiplicacion es: %d \n", resultado);

    resDivision = num1 / num2; // Operacion de division
    printf("El resultado de la division es: %.2f \n", resDivision);

    resultado = num1 % num2; // Operacion de modulo
    printf("El resultado del modulo es: %d \n", resultado);

    resultado++; // Incremento
    printf("Incremento 1 %d\n", resultado);

    resultado--;
    printf("Decremento 1 %d\n", resultado);
    // Operacion Combinada
    resultado = a * (num1 + num2) + b * (b + num2) * c + d;
    printf("Resultado  %d\n", resultado);

    float nota1, nota2, notafinal;
    printf(" Igrese la primer nota:\n");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota:\n");
    scanf("%f", &nota2);
    notafinal = (nota1 + nota2) / 2;
    printf("\nPrimer nota: %.2f", nota1);
    printf("\nSegunda nota: %.2f", nota2);
    printf("\nPromedio de notas: %.2f", notafinal);
    getchar(); // Para que no se cierre automaticamente

    return 0;
}
