#include<stdio.h>

struct student
{
	int roll;
	char name[20];
	int age;
	float graduation_per;
};

int main()
{
	struct student st[5];
	int i, roll_no, temp, j;
	printf("Enter the student details: \n");
	for(i=0; i<2;i++)
	{
		printf("Enter the roll no: ");
		scanf("%d", &st[i].roll);
		printf("Enter the name: ");
		scanf("%s", st[i].name);
		printf("Enter the age: ");
		scanf("%d", &st[i].age);
		printf("Enter the Graduation percentage: ");
		scanf("%f", &st[i].graduation_per);
	}
	for (i=0;i<5;i++)
	{
		for (j=0;j<5-i;j++)
		{
			if (st[j].roll > st[j+1].roll)
			{
				temp = st[j];
				st[j] = st[j+1];
				st[j+1] = temp;
			}
		}
	}
	printf("\n\n\t ************ Displaying Student's Details ***********\n\n");
	printf("\n\tRoll no.\tStudent's Name\tAge\tPercentage");
	for(i=0;i<2;i++)
	{
		printf("\n\t--------------------------------------------------");
		printf("\n\t  %d\t", st[i].roll,"\t\t");
		printf("\t%s\t", st[i].name,"\t\t");
		printf("\t%d\t", st[i].age, "\t\t");
		printf("%f\t", st[i].graduation_per);
		
	}
	// printf("\nEnter the roll No to get the data: ");
	// scanf("%d", &roll_no);
	// for (i=0;i<3;i++)
	// {
	// 	if(st[i].roll == roll_no)
	// 	{
	// 		printf("\nThe roll no : %d", st[i].roll);
	// 		printf("\nThe name : %s", st[i].name);
	// 		printf("\nThe age : %d", st[i].age);
	// 		printf("\nThe graduation percentage : %f", st[i].graduation_per);
	// 	}
	// }
	return 0;
}
