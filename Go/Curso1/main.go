// Todo se divide por paquetes
// El paquete main da la entrada de nuestra app
package main

import (
	"fmt"
	"strings"
)

func suma(a int, b int) int {
	return a + b
}

// Funcion principal
// Se ejecuta con "go run ." -> busca el main.go
func main() {
	fmt.Println("Hola mundo") // Imprimir en una linea

	// Numeros
	var entero int = 10             // Declaracion de variables
	entero2 := 10                   // Inferencia de tipos
	decimal := 3.14                 //Decimal
	suma2 := entero2 + int(decimal) // casting -> Pasar a otro tipo
	fmt.Printf("Suma 2 : %d \n", suma2)
	suma1 := entero + entero2
	fmt.Printf("Entero 1 : %d \n", entero)
	fmt.Printf("Entero 2 : %d \n", entero2)
	fmt.Printf("Suma 1 : %d \n", suma1)

	// Texto
	mensaje := "Hola, "
	concatenado := mensaje + "Nico"
	enMayusculas := strings.ToUpper(concatenado) // Mayusculas
	fmt.Println(enMayusculas)

	// Booleano
	esVedadero := true
	esFalso := false
	fmt.Println("Es verdadero : ", esVedadero)
	fmt.Println("Es Falso : ", esFalso)

	//Arrays
	//var arrayFijo2 [tamaño]int        // Declaracion de un array
	arrayFijo := [3]int{1, 2, 3} // Declaracion de un array
	fmt.Println("Array: ", arrayFijo)

	sliceVariable := []int{4, 5, 6}          // Arreglo dinamico que puede crecer
	sliceVariable = append(sliceVariable, 7) // Agregar un valor
	fmt.Println("Slice Variable: ", sliceVariable)

	//Diccionarios o mapas Kay:value
	diccionario := map[string]int{
		"clave1": 1,
		"clave2": 2,
	}
	fmt.Println("Diccionario: ", diccionario)

	//structs
	type Persona struct {
		Nombre string
		Edad   int
		// Si los nombres no estan en mayusculas, es solo del archivo
		// si esta en mayuscula, se puede exportar
	}

	p1 := Persona{Nombre: "Nico", Edad: 22}
	fmt.Println("Struct: ", p1)

	// Condicionales
	edad := 20
	if edad < 18 {
		// programasion assertive / negative
		fmt.Println("Sos menor de edad")
		return // para que no siga la ejecucion
	}

	fmt.Println("Sos mayor de edad")

	// bulce classic
	for i := 0; i < 5; i++ {

		if i == 3 {
			continue // salta la iteracion
		}
		fmt.Printf("Iteracion: %d \n", i)
	}

	// while
	n := 0
	for n < 10 {
		fmt.Printf("While Iteracion: %d \n", n)
		n++
	}

	// Range
	slice := []string{"uno", "dos", "tres"}

	for index, value := range slice {
		fmt.Printf("Indice : %d , Valor : %s \n", index, value)
	}

	for _, value := range slice { // SImplifico un valor de los que me devuelve el metodo
		fmt.Printf("Indice : %s , Valor : %s \n", value, value)
	}
	for index := range slice { // SImplifico un valor de los que me devuelve el metodo
		// Al ser el segundo valor el que ignoro, no hace falta el _
		fmt.Printf("Indice : %d , Valor : %d \n", index, index)
	}
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
