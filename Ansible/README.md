# Curso Ansible Udemy

En este caso se genera la instalacion de ansible a travez de python en un entorno virtual. En la realidad se debe instalar o a nivel de root o usuario dependiendo quien tendra acceso.

En el nodo gestionado necesitamos Python, SSH (para comunicacion), crear un usuario para trabajar si no se quiere trabajar como ROOT. Y copiar las claves SSH del usuario con el que vayamos a trabajar

**Inventario**: Listado de maquinas con las que vamos a trabajar. Se dictan con la IP o con el nombre si tiene DNS. [Maquinas](/maquinas). Ademas de un archivo tipo INIT, se puede utilizar archivos de configuracion tipo **yaml** como [.yaml](/maquinas.yaml)

**asible.cfg**: Archivo de configuracion de ansible, se le puede establecer donde encontrar la lista de inventario

```bash
# no es necesario establecer de donde saca el inventario
ansible all -m ping 

# se lo envio a un maquina especifica
ansible maquina1 -m ping 

# dentro del inventario puedo agrupar para trabajar con grupos especificos
ansible grup1 -m ping

# Utilizar las maquinas sin grupo
ansible ungrouped -m ping
```

---