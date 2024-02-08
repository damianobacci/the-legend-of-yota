#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool parseAndExecute(char* input)
{
    char* context; // Context pointer for strtok_s
    char* verb = strtok_s(input, " \n", &context); // Pass the address of context
    char* noun = strtok_s(NULL, " \n", &context); // Use context in subsequent calls

    if (verb != NULL)
    {
        if (strcmp(verb, "quit") == 0)
        {
            return false;
        }
        else if (strcmp(verb, "look") == 0)
        {
            printf("It's terrible around here, no girls.\n");
        }
        else if (strcmp(verb, "go") == 0)
        {
            printf("It's too stressful to go anywhere.\n");
        }
        else
        {
            printf("Minchia, I don't know how to '%s'.\n", verb);
        }
    }
    return true;
}
