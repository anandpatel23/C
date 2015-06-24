#include <stdio.h>
// read character stream from stdin, copy to stdout
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar((char)c);
	
	return 0;
}

/*
$ gcc mycat.c -o mycat
$ ./mycat < mycat.c
*/
