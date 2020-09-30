#include<stdio.h> 		// stdio Header file
#include<stdlib.h>		// stdio Header file

int main() 
{
	printf("Please enter a char \n");		// Asking user to enter a character 
	char c = getchar();				// getting user character input in c variable
	getchar(); 					// for the newline
	
	printf("The user entered %c, what a character \n",c);	// showing output to user that user enter this character

	return 0;
	

}
