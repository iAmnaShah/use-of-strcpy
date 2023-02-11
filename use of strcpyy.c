#include<stdio.h>
int main()
{
    char s1[15];
    char s2[15];
    printf("Enter value:");
    scanf("%s",s2);
    strcpy(s1, s2);
    printf("%s %s",s1, s2);
    return 0;
}
