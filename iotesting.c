#include <stdio.h>

enum {SIZE = 5};

int main(int argc, char argv[]) {
	FILE *f = fopen("testfile", "r");

	char buffer[SIZE];
	
	size_t r_code = fread(buffer, sizeof *buffer, SIZE, f);
	for(int i = 0; i < SIZE; ++i) printf("%c", buffer[i]);
}
