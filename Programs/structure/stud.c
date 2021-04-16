#include <stdio.h>

struct student
{
    int rollno;
    char name[80];
    int age;
    float graduation_per;
};

void accept(struct student list[], int s);
void display(struct student list[], int s);
void bsortDesc(struct student list[], int s);

int main()
{
    struct student data[20];
    int n, choice, roll_no;

    printf("Number of records you want to enter? : ");
    scanf("%d", &n);

    accept(data, n);
    printf("\nEnter 1 for display all data or 2 for searching : ");
    scanf("%d", &choice);
    if (choice == 2)
    {
        printf("Enter the roll_no: ");
        scanf("%d", &roll_no);
        printf("\n\n**************** Displaying Student's Details ****************\n\n");
        printf("\n\tRoll no.\tStudent's Name\tAge\tPercentage");
        for(int i=0;i<n;i++)
        {
            if (data[i].rollno == roll_no)
            {
                printf("\n\t--------------------------------------------------");
                printf("\n\t  %d\t", data[i].rollno,"\t\t");
                printf("\t%s\t", data[i].name,"\t\t");
                printf("\t%d\t", data[i].age, "\t\t");
                printf("%.2f\t", data[i].graduation_per);
            }
        }
    }
    else
    {
        bsortDesc(data, n);
        printf("\nAfter sorting");
        display(data, n);
        
    }
    
    return 0;
} 

void accept(struct student list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\n\nEnter data for Record #%d", i + 1);
        
        printf("\nEnter rollno : ");
        scanf("%d", &list[i].rollno);

        printf("Enter name : ");
        scanf("%s", list[i].name);

        printf("Enter age : ");
        scanf("%d", &list[i].age);
        
        printf("Enter Graduation Percentage : ");
        scanf("%f", &list[i].graduation_per);
    } 
}

void display(struct student list[80], int s)
{
    int i;
    
    printf("\n\n**************** Displaying Student's Details ****************\n\n");
    printf("\n\tRoll no.\tStudent's Name\tAge\tPercentage");
    for(i=0;i<2;i++)
    {
        printf("\n\t--------------------------------------------------");
        printf("\n\t  %d\t", list[i].rollno,"\t\t");
        printf("\t%s\t", list[i].name,"\t\t");
        printf("\t%d\t", list[i].age, "\t\t");
        printf("%.2f\t", list[i].graduation_per);
        
    }
}

void bsortDesc(struct student list[80], int s)
{
    int i, j;
    struct student temp;
    
    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (list[j].rollno > list[j + 1].rollno)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            } 
        }
    }
}