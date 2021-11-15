#include<stdio.h>
void main()
{
	int a, b, c;
	printf("enter the three ascii characters");
	scanf("%d%d%d", &a,&b,&c);
	a = a+95;
	b = b+95;
	c = c+95;
	printf("%c%c%c", a,b,c);
}
