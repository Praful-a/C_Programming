// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	int sum=0, i;
// 	char gen;
// 	int n, marks[10];
// 	printf("Enter the no. of stud: ");
// 	scanf("%d", &n);
// 	for (i=0;i<n;i++)
// 	{
// 		scanf("%d", &marks[i]);
// 	}
// 	fflush(stdin);
// 	gen = getchar();
// 	if (gen == 'b')
// 	{
// 		for (i=0;i<n;i++)
// 		{
// 			if (i%2 == 0)
// 				sum += marks[i];
// 		}
// 	}
// 	if (gen == 'g')
// 	{
// 		for (i=0;i<n;i++)
// 		{
// 			if (i%2 != 0)
// 				sum += marks[i];
// 		}
// 	}
// 	printf("%d", sum);
// 	return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int marks_summation(int* marks, int number_of_students, char gender)
{
	int sum = 0, i;
	if (gender == 'b')
	{
		for(i=0;i<number_of_students;i++)
		{
			if (i%2 == 0)
				sum += *(marks + i);
		}
	}
	if (gender == 'g')
	{
		for (i=0;i<number_of_students;i++)
		{
			if (i%2 != 0)
				sum += *(marks + i);
		}
	}
	return sum;
}

int main()
{
	int number_of_students;
	char gender;
	int sum;
	scanf("%d", &number_of_students);
	int *marks = (int *) malloc(number_of_students * sizeof(int));
	for (int student = 0; student < number_of_students; student++)
	{
		scanf("%d", (marks + student));
	}
	scanf(" %c", &gender);
	sum = marks_summation(marks, number_of_students, gender);
	printf("%d", sum);
	free(marks);
	return 0;
}