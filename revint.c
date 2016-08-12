#include <stdio.h> 
#include<string.h> 
int main() 
{ 
    int p,k=0,sum=0;
    printf("enter the value of p\n");
    scanf("%d",&p);
    while(p!=0)
    {
        k=p%10;
        sum=sum*10+k;
        p=p/10;
    }
    printf("reverse= %d",sum);
    return 0; 
} 
