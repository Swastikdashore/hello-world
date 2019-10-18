#include <stdio.h>

// Check Examples


//Compiler version gcc  6.3.0

int main()
{
	int a,b,c;
	printf("enter the date ");
	scanf("%d",&a);
	b=a%7;
	switch(b)
	{
		case (0) : printf("Monday");
			break;
		case (1) : printf("Tuesday");
			break;
		case (2) : printf("Wednesday");
			break;
		case (3) : printf("Thursday");
			break;
		case (4) : printf("Friday");
			break;
		case (5) : printf("Saturday");
			break;
		case (6) : printf("Sunday");
			break;
	}
	return 0;
}