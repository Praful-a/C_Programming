#include<stdio.h>
int main(){
   int i, j, count, temp, arr[25];

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&arr[i]);

   // Implementation of insertion sort algorithm
   for(i=1;i<count;i++)
   {
      temp=arr[i];
      j=i-1;
      while((temp<arr[j])&&(j>=0)){
         arr[j+1]=arr[j];
         j=j-1;
      }
      arr[j+1]=temp;
   }
   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",arr[i]);

   return 0;
}