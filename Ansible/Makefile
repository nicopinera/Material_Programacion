IP_SERV_DEST=1.1.1.1
FILE_INVENTARIO=maquinas

install:
	@echo "Instalando paquetes necesarios...";\
	apt-get update && apt upgrade -y;\
	sudo apt install python3 -y;\
	sudo apt install python3-venv -y;\
	sudo apt install python3-pip -y;

creacion_venv:
	@echo "Creando entorno virtual...";\
	python3 -m venv venv;\
	. venv/bin/activate;\
	pip install --upgrade pip;\

install_requirements:
	@echo "Instalando dependencias del proyecto...";\
	. venv/bin/activate;\
	pip install ansible;\

# Generar llaves ssh para el nodo central
# Es necesario que el nodo a controlar tenga directorio .ssh creado
# Te va a pedir la contraseña del nodo remoto
generar_llaves:
	@echo "Generando claves pub-priv";\
	ssh-keygen;\
	ssh-copy-id ${IP_SERV_DEST};

conectarse_nodo:
	ssh ${IP_SERV_DEST};

ans_establecer_inventario:
	ansible -i $(FILE_INVENTARIO) all -m ping;\