#include <stdlib.h>

int main()
{
	typedef struct Employee Employee;
	struct Employee {
		char *name;
		double wage;
		int id;
	};
	
	Employee *worker;
	// allocate space for an Employee
	worker = (Employee *) malloc(sizeof(Employee));

	// check for NULL - see emalloc
	if (worker == NULL){
		printf("malloc faild\n");
		exit(1);
	}

}
