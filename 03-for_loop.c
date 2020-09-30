#include<stdio.h>			// stdio Header file
#include<stdlib.h>			// stdlib Header file

int main() {

	printf("Hello World\n");	// print simple Hello msg
	int i;				// i is initialized to 1
	for(i=0; i<10; i++)		// for( initial value ; end condition ; increment of i )
	{
		printf("In a loop\n");	// Printing msg which show's when loop executing 10 times
	}
	
	return EXIT_SUCCESS;
}
