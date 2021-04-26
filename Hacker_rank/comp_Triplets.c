#include<stdio.h>

int main()
{
	int arr1[3], arr2[3];
	int i, j, bob = 0, alice=0;
	for(i=0;i<3;i++)
	{
		scanf("%d", &arr1[i]);
	}
	for(i=0;i<3;i++)
	{
		scanf("%d", &arr2[i]);
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//if(arr1[i] == arr2[j])
			//{
			//	bob = 0;
			//	alice = 0;
			//}
			if(arr1[i] > arr2[j])
			{
				bob += 1;
			}
			else
			{
				alice += 1;
			}
		}
	}
	printf("%d %d", alice, bob);
	return 0;
}