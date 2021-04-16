#include<stdio.h>
int main()
{
	int a, b, i;
	scanf("%d\n%d", &a, &b);
	for(i = a; i <= b; i++)
	{
		if(1 <= i || i <= 9)
		{
			switch(i)
			{
				case 1:
					printf("one");
					printf("\n");
				break;
				case 2:
					printf("two");
					printf("\n");
				break;
				case 3:
					printf("three");
					printf("\n");
				break;
				case 4:
					printf("four");
					printf("\n");
				break;
				case 5:
					printf("five");
					printf("\n");
				break;
				case 6:
					printf("six");
					printf("\n");
				break;
				case 7:
					printf("seven");
					printf("\n");
				break;
				case 8:
					printf("eight");
					printf("\n");
				break;
				case 9:
					printf("nine");
					printf("\n");
				break;
				default:
					if (i%2 == 0)
					{
						printf("even\n");
					}
					if (i%2 != 0)
					{
						printf("odd\n");
					}
			}
		}
	}
	return 0;
}