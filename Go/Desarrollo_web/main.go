package main

import (
	"fmt"
	"net/http"
)

func main() {
	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprintf(w, "<h1>Hola mundo</h1>") // donde se escribe, que se escribe
	}) // raiz de nuestro sitio
	http.ListenAndServe(":8080", nil)
}
