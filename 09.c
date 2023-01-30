//program to take user name, if the name is present in our list user is allowed to calculate factorial of a number...
#include<stdio.h>
#include<string.h>
void CalculateFact()
{
    int i,n,fact=1;
    printf("\nEnter a number to calculate factorial of a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("\nFactorial of %d is %d.\n\n",n,fact);
}
int main()
{
    char name[20],str[10][20]={"ram","lakhan","vishwajeet","deepika","sunita","geeta","lakshay","shivani","bhoomi","arun"};
    int i,flag=0;
    printf("\nEnter your name : ");
    gets(name);
    for(i=0;i<10;i++)
    {
        if(strcmp(str[i],name)==0)
        {
            flag++;
            printf("Welcome %s!",name);
            CalculateFact();
            break;
        }
    }
    if(flag==0)
    {
        printf("\nSorry your name is not present in our list, so you are not allowed to move forther!!!\n\n");
    }
    return 0;
}