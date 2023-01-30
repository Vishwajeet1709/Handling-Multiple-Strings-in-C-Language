//Program to read and display a 2D array of string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10];
    int i,j,len;
    printf("\nEnter Five Words : ");
    for(i=0;i<5;i++)
    {
        printf("\nEnter word %d : ",i+1);
        gets(str[i]);
    }
    printf("\n\nWords Are\n");
    for(i=0;i<5;i++)
    {
        len=strlen(str[i]);
        for(j=0;j<len;j++)
        {
            printf(" %c ",str[i][j]);
        }
        printf("\n");
    }
    return 0;
}
