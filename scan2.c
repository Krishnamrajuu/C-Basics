#include<stdio.h>
void main()
{
	char c;
	printf("enter a character (a-z or A-Z)");
	scanf("%c", &c);
	printf("corresponding ASCII character for %c is %d", c,c);  
}
