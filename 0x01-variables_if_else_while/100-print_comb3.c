#include <stdio.h>
/**
*main - entry
*Return: Always 0
*/
int main(void){
	int a, b;
	for (a = '0'; a <= '9'; a++){
		for (num2 = '0' ; num2 <= '9' ; num2++){
		if (a < b){
			putchar(a);
			putchar(b);
			if (a != '8' || (a == '8' && b != '9')){
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
putchar('\n');
return (0);
}
