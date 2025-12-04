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