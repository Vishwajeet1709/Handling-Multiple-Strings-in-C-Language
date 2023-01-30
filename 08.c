//program to find distance between two words in a given list
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char word1[10],word2[10],str[10][10]={"hello","friends","my","name","is","jeet","what","is","your","name"};
    int w1,w2,i;
    printf("\nEnter word 1 : ");
    gets(word1);
    printf("\nEnter word 2 : ");
    gets(word2);
    for(i=0;i<10;i++)
    {
        if(strcmp(str[i],word1)==0)
            {
                w1=i+1;
            }
        else if(strcmp(str[i],word2)==0)
            {
                w2=i+1;
            }
    }
    if(w1>0 && w2>0)
    {
        printf("\n distance between these two word is %d.\n\n",abs(w1-w2)-1);
    }
    else if(w1==0)
    {
        printf("\n\"%s\" did not found in our list.\n",word1);
    }
    else if(w2==0)
    {
        printf("\n\"%s\" did not found in our list.\n",word2);
    }
    return 0;
}
