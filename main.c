#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum expense_types{
	BILL,LUXARY,FOOD,HOUSEHOLD	
};

struct Expense {
	char id;
	char type;
	char name[256];

};

struct Dataset{
	char file_path[256];
	char **raw_file_data;
	struct Expense expenses[1024];
};

void print_food(){

}

void print_cleaning(){

}

void print_bath(){

}

void print_bill(){

}

void print_extra(){

}

void print_all(){

}

void add_money(int amount){

}

void subtract_money(int amount){

}

void add_expense(char type[], char name[]){

}

void remove_expense(int id){

}

int get_next_id(){

}


int get_expense(int id){

}

int get_all_expenses(){

}

int readline(char buffer[], FILE *stream){
	int i = 0;
	int c;
	while (c = fgetc(stream)){
		if (c == '\n') break;	
		if (c == EOF){
			return EOF;
		}
		buffer[i] = c;
		i++;
	}
}

int count_lines(FILE *stream){
	fpos_t origin;
	fgetpos(stream, &origin);
	int count = 0;
	fseek(stream, 0, SEEK_SET);
	char buffer[256]; // Only needed for argument
	int c;
	while ((c = readline(buffer, stream)) != EOF){	
		count++;
	}
	fsetpos(stream, &origin);
	return count;	
}

void readlines(char *line_buffer[], FILE *stream){
	int i = 0;
	int c;
	while (c != EOF){
		char *new_buffer;
		new_buffer = malloc(sizeof(new_buffer)*256);
		c = readline(new_buffer, stream);
		line_buffer[i] = new_buffer;
		i++;
	}
}

void init_dataset(struct Dataset *set){
	FILE *f = fopen(set->file_path, "r");

	if (f==NULL) {
		return;
	}
	printf("%d\n",count_lines(f));
	char *line_buffer[1000];
	readlines(line_buffer, f);
	
	set->raw_file_data = line_buffer;
}

int main(int argc, char argv[]){
	struct Dataset set = {"data-recurring"};
	struct Dataset *setp;
	setp = &set;

	init_dataset(setp);
	for (int i=0; setp->raw_file_data[i] != NULL; i++){
		printf("%s\n", setp->raw_file_data[i]);
	}
}
