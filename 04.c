//Program to search a string in  list of string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[15],FruitName[15][15]={"lychee","apple","grapes","banana","papaya","guava","pear","orange","cherry","mango","pine apple","cherry","strawberry","melon","watermelon"};
    int i;
    printf("\nEnter Your Favorite Fruit's name (in lower case) : ");
    gets(str);
    for(i=0;i<15;i++)
    {
        if(strcmp(FruitName[i],str)==0)
        {
            printf("\nYes, Item is present in the list.\n\n");
            return 0;
        }
    }
    printf("\nItem not present in the list.\n\n");
    return 0;
}
