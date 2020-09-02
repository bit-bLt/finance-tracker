target: main.c
	cc main.c -o bin/fin

run: main.c
	cc main.c -o bin/fin && cd bin && ./fin; cd ../
