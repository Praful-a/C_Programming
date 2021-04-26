#include<stdio.h>
#include <string.h>
#include<ctype.h>
 
int main()
{
    char s[26];  
    int  i,j,count=0,n, arr[10];
    printf("Enter  the string : ");
    gets(s);
    for(j=0;s[j];j++)
	 	n=j; 
    for(i=0;i<=n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
 		  for(j=i+1;j<=n;j++)  
	      {   
	        if(s[i]==s[j])
    	    {
	    		if(isdigit(s[i]) != 0)
	    		{
	                count++;
	                s[j]='\0';
	            }
	     	}
	      }  
	      for(i=0;i<10;i++)
	      	if(i == count)
	      		arr[i] = count;
	      	printf("%d ",arr[i]); 
       }   
 	} 
    return 0;
}