#include <stdio.h>
#include <string.h>

// a program illustrating character arrays and pointer

int main(){
	char name[20] = "Fred";
	char *anotherName;
	anotherName = name;

	printf("name = %s\n", name);
	printf("Another name for %s is %s\n", name, anotherName);
	printf("The %d-th letter of %s = %c\n", strlen(name), name, name[3]);
	printf("The %d-th letter of %s = %c\n", strlen(name), name, *(name+3));

	return 0;
}
