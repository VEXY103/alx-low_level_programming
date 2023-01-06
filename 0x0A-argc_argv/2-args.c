#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the name of the program.
 * @argc: Number of command line arguments.
 * @argv: Array name.
 * Return: 0
 */

int main(int argc, char *argv[])   
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s ", argv[i]);
        printf("\n");    
    }
    return (0);
}