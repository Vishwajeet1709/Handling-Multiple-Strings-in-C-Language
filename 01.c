//Program to find numbers of vowels in 5 strings stored in a two dimensional array, taken from user.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int CountVowels(char* str)
{
    int i,count=0,len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u')
            count++;
    }
    return count;
}
int main()
{
    char str[5][100];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter string %d : ",i+1);
        gets(str[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nThere are %d vowels in string : ",CountVowels(str[i]),i+1);
        puts(str[i]);
        printf("\n");
    }
    return 0;
}
