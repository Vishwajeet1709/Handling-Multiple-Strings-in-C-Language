//Program to print the number which are palindrome numbers from the list
#include<stdio.h>
int IsPalindrome(int num)
{
    int i,j,n=1,temp,temp2=1,right;
    for(i=num;i=i/10;n++)
    {}
    for(i=1;i<=n/2;i++)
    {
        temp2=1;
        temp=num;
        right=temp%10;
        temp=temp/10;
        num=temp;
        for(j=0;temp>10;j++)
        {
            temp=temp/10;
            temp2=temp2*10;
        }
        if(right!=temp)
        {
            return 0;
        }
        num-=temp*temp2;
    }
    return 1;
}
int main()
{
    int i,n;
    printf("Enter the numbers of elements you want in a list : ");
    scanf("%d",&n);
    int list[n];
    printf("\nENTER ELEMENTS\n");
    for(i=0;i<n;i++)
    {
        printf("\nElement %d : ",i+1);
        scanf("%d",&list[i]);
    }
    printf("\nList :");
    for(i=0;i<n;i++)
    {
        printf(" %d",list[i]);
    }
    printf("\n\nPalindrome number : ");
    for(i=0;i<n;i++)
    {
        if(IsPalindrome(list[i]))
        {
            printf(" %d",list[i]);
        }
    }
    printf("\n\n");
    return 0;
}
