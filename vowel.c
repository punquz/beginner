#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value of ch\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("vowel");
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("vowel");
    else
        printf("consonant");
        return 0;
}
