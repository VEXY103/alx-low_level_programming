#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main() 
{
    int n, a = 0, b = 0, c = 0, d = 0, e = 0;
    int first_rest, second_rest, third_rest, fourth_rest;
  
    if (n % 25 == 0)
    {
  	    while (a * 25 != n)
        {
    	    a++;
        }
    }
    else if (n < 25)
    {
        a == 0;
    }
    else
    {
  	    n % 25 == first_rest;
    
        if (first_rest % 10 == 0)
        {
    	    while (b * 10 != first_rest)
            {
        	    b++;
            }
        }
        else if (first_rest < 10)
        {
            b == 0;
        }
        else 
        { 
  	        first_rest % 10 == second_rest;
    
            if (second_rest % 5 == 0)
            {
    	        while (c * 5 != second_rest)
                {
        	        c++;
                }
            }
            else if (second_rest < 5)
            {
                c == 0;
            }
            else
            {
                second_rest % 5 == third_rest;
    
                if (third_rest % 2 == 0)
                {
    	            while (d * 2 != third_rest)
                    {
        	            d++;
                    }
                }
                else if (third_rest < 2)
                {
                    d == 0;
                }
                else
                {

                }
            }
    
        }
    
    }
    int cent;
    cent = a + b + c + d + e;

    return (cent);
    return (0);
}

