#include <stdbool.h>
#include <stdio.h>
#include "parsexec.h"
static char input[100] = "";
static bool getInput(void)
{
	printf("\n--> ");
	return fgets(input, sizeof input, stdin) != NULL;
}
int main()
{
	printf("Welcome to the Legend of Yota.\nWe are bound to a great adventure.");
	while (parseAndExecute(input) && getInput());
	printf("\nBye!\n");
	return 0;
}