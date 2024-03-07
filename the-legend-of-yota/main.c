#include <stdbool.h>
#include <stdio.h>
#include "parsexec.h"
static char input[100] = "";
static bool getInput(void)
{
	printf("\nPlease enter your command --> ");
	return fgets(input, sizeof input, stdin) != NULL;
}
int main()
{
	printf("Welcome to the Legend of Yota.\nWe are bound to a great adventure full of quirky peoples.\n");
	while (getInput() && parseAndExecute(input));
	printf("\nBye!\n");
	return 0;
}