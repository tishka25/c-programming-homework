#include <stdio.h>

int main()
{
	float a;
	float b;
	float c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	if (a > b)
	{
		if (a > c)
		{
			printf ("%f", a);
 		}
		else printf ("%f", c);
		
	} else
	{
		if (b > c)
		{
			printf("%f", b);
		}
		else printf("%f", c);
	}	
}
