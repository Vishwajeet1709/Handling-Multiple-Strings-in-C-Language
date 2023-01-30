//Program to eliminate email IDs which dose contain '@' in it
#include<stdio.h>
#include<string.h>
int main()
{
    char EmaiIDs[10][30]={"jeet1342@gmail.com","Rahul435@gmail.com","Gaurav1234gmail.com","Saurabh240@yahoo.com","Vishwajeet@techugo.com","Navneet120yahoo.com","Kajal240licindia.com","Dilkush.kumar245yahoo.com","Manav.Gupta450@@gmail.com","Trivender.Gupta450@@gmail.com"};
    int i,j,len,ValidId;
    for(i=0;i<10;i++)
    {
        ValidId=0;
        len=strlen(EmaiIDs);
        for(j=0;j<len;j++)
        {
            if(EmaiIDs[i][j]=='@')
            {
                ValidId=1;
            }
        }
        if(ValidId==0)
        {
            printf("\nInvalid Email Id \"%s\"\n",EmaiIDs[i]);
        }
    }
    return 0;
}
