### Sistemas Distribuidos

## rpc

# Calculadora
Realiza operaciones de suma y resta de forma remota

# Uso
	1- correr el servidor
	2- verificar que el servidor se haya registrado 
		rpcinfo
	3- correr el cliente

# Errores

- install lib headers
	sudo apt install libntirpc-dev

- not found rpc.h
	Fix the problem as follows:

	Search for a library that includes rpc (apt-file search rpc/rpc.h)
	Installing (apt-get install libntirpc-dev)
	Copying files from the ntircp folder to rcp folder
	Run: make
	Modifying the path of the file not found
	Repeat the process until mistakes resolved
- add to MakeFile.calculadora 
	LDLIBS += -ltirpc
 
