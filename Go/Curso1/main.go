// Todo se divide por paquetes
// El paquete main da la entrada de nuestra app
package main

import (
	"fmt"
	"strings"
)

// Funcion principal
// Se ejecuta con "go run ." -> busca el main.go
func main() {
	fmt.Println("Hola mundo") // Imprimir en una linea

	// Numeros
	var entero int = 10 // Declaracion de variables
	entero2 := 10       // Inferencia de tipos
	suma1 := entero + entero2
	fmt.Printf("Entero 1 : %d \n", entero)
	fmt.Printf("Entero 2 : %d \n", entero2)
	fmt.Printf("Suma 1 : %d \n", suma1)

	// Texto
	mensaje := "Hola, "
	concatenado := mensaje + "Nico"
	enMayusculas := strings.ToUpper(concatenado) // Mayusculas
	fmt.Println(enMayusculas)

}

/*
Tipos de datos
- int, int 64, int32 ...
- uint, unt16, unt32 ...
- float
- boolean
- string
- byte
- rune = int32
- complex
*/
