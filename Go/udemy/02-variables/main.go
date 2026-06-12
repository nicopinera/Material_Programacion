package main

import (
	"fmt"
	"math"
)

// Declaracion e inicializado de constantes a nivel de paquete
const PI float64 = 3.14

// Multiples constantes con tipos de datos distintos

const (
	w = 100      // decimal
	x = 0b101010 // binario
	y = 0o12     // octal
	z = 0xff     // hexa
)

// iota empieza en 0 y aumenta en 1 en cada variable
const (
	Domingo = iota + 1 // empieza en 1 y va aumentando
	Lunes
	Martes
	Miercoles
	Jueves
	Viernes
	Sabado
)

func main() {
	fmt.Println("Modulo Variables")
	// declaracion de variables
	var nombre, apellido string
	var edad int
	nombre = "Meliodas"
	apellido = "Ban"
	edad = 30

	fmt.Println(nombre, apellido, edad)

	// declaro y asigno
	var nombre2 string = "Sampacho"
	fmt.Println(nombre2)

	// Declaraciones multiples
	var (
		nombre3                  string = "Juancho"
		apellido3, segundoNombre string
		edad2                    int
	)
	apellido3 = "naranja"
	segundoNombre = "tutancamon"
	edad2 = 45
	fmt.Println(nombre3, apellido3, segundoNombre, edad2)
	// Declaraciones y asignaciones sin tipo -> Dinamico
	var (
		nombre4 = "Juancho"
		edad4   = 20
	)
	fmt.Println(nombre4, edad4)

	variable2 := "declaracion directa"
	fmt.Printf("Frase: %s \n", variable2)

	// Tipos de datos numericos
	// var entero int // hay INT y UINT al igual que C
	// var enteroSinSigno uint
	// var flotante float64 // float32
	fmt.Println("Valores INT: ", math.MinInt, math.MaxInt)
	fmt.Println("Valores FLOAT: ", math.MaxFloat32)
	fmt.Println("Valores UINT: ", math.MaxUint32)

	// var booleano bool = false o true
}
