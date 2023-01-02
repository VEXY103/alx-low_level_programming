#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: prefix to be measured.
 * Return: the number of bytes in s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
    int a, b, c;

    for(a = 0; s[a] != "\0"; a++)
    {
        for(b = 0; s[b] != "\0"; b++)
        {
            if(s[a] == s[b])
            {
                c = c + 1;
            }
        }
        return(c);
    }
}