#include <stdio.h>

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
	struct Expense expenses[];
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

void init_dataset(struct Dataset *set){
	FILE *f = fopen(set->file_path, "r");
	size_t count = 3;
	char buffer[count];
	if (f==NULL) {
		return;
	}
	fread(buffer, sizeof *buffer, 1, f);
	printf("%c", buffer[3]);
	
}

int main(int argc, char argv[]){
	struct Dataset set = {"data-recurring"};

	init_dataset(&set);

}
