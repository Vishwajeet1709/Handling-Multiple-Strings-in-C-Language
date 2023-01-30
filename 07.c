//Program to print valid IP addresses from a list
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int valid_IP(char* IP)
{
    int i,temp,count=0;
    char *str;

    str = strtok(IP,".");
    temp = atoi(str);
    while(str!=NULL)
    {
        count++;
        if(temp>255 || str[0]=='0')
            return 0;

        str = strtok(NULL,".");
        temp = atoi(str);
    }
    if(count!=4)
        return 0;

    return 1;
}
int main()
{
    int i;
    char IP[10][20]={"198.15.148.004","198.1567.168.0","162.245.48.32","120.198.13.142.220","200.39.17.186","598.168.42.1","19.187.155.234","156.15.15","19.154.1806487","1587154870158"};
    printf("List of all IP addresses in list\n");
    for(i=0;i<10;i++)
    {
        printf(" %d) %s\n",i+1,IP[i]);
    }
    for(i=0;i<10;i++)
    {
        if(valid_IP(IP[i]))
        {
            printf("\nNo %d is a Valid IP",i+1);
        }
    }
    printf("\n\n");
    return 0;
}
