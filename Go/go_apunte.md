# Apunte de Golang

## Introduccion

Go es un lenguaje de programación de código abierto desarrollado por Google que es rápido, eficiente, seguro y fácil de usar. Se utiliza comúnmente para construir aplicaciones de servidor, herramientas de línea de comandos y aplicaciones de alto rendimiento.

Los comentarios en golang se realizan con `//`, los comentarios de bloque son con `/**/`.

la linea `package main` indica al paquete al que pertenece el archivo fuente. Todos los archivos de go tienen que pertenecer a un paquete. Si pertenecen al paquete `main` deben tener una funcion `func main()` como punto de entrada.

Para ejecutar un archivo podemos hacer:

```bash
go run archivo.go
```

esto compila el archivo internamente y lo ejecuta. Si queremos generar un binario para distribuir podemos hacer:

```bash
go build archivo.go
```

Los paquetes de tercero son paquetes que no estan incluidos en la libreria estandar de Go. Debemos inicializar un manejador de modulos de la siguiente forma

```bash
go mod init nombre_paquete
```

Para obtener un paquete de terceros hacemos

```bash
go get url_paquete
```

---

## Variables

```golang
// declaracion de variables
var nombre string
var nombre, apellido string // multiples definiciones
```

`:=` sirve para inicializar y declarar una nueva variable

### Tipos de datos

- Basicos
  - Interos
  - Flotantes
  - Booleanos
  - Strings
- Agregados
  - Matrices
  - Estructura de datos o colecciones
- Referencia
  - punteros
  - segmentos
  - mapas
  - funciones
  - canales
- Interfaces

```golang
// Tipos de datos numericos
var entero int // hay INT y UINT al igual que C
var enteroSinSigno uint
var flotante float64 // float32
var booleano bool = false // true
nombreCompleto := "Alex man"
```

Los tipos de datos basicos tienen valores predeterminados 0, false o una cadena vacia. Las estructuras suelen tener el valor por defecto `nill`, equvalente al `null`

El casteo de datos tiene que ser explisito. El paquete strconv tiene funciones para convertir string a entero.

FMT es un paquete basico de la libreria standar de go.

- print/printf/println permiten imprimir datos en consola. -> %v sirve para mostrar un dato que no sabemos el tipo de dato que es
- sprintf permite generar un string con formato y guardarlo en una variable.
- scan permite ingresar un dato por consola, hay que pasar una referencia de memoria de la variable (&)

