//Program to shorts ten city names stored in a two dimensional array
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[10][15],temp[15];
    int i,j;
    printf("\nEnter name of 10 cities : ");
    for(i=0;i<10;i++)
    {
        printf("\nEnter City %d : ",i+1);
        gets(str[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(toupper(str[i]),toupper(str[j]))>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("\nCity %d : ",i+1);
        puts(toupper(str[i]));
    }
    printf("\n\n");
    return 0;
}
