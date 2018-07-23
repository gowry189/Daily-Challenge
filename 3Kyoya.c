#include<stdio.h>
#include<string.h>
int main()
{
    int i,a;
    int l,sum=0;
    char s[20];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<=l;i++){
        sum=(sum+26);
    }
    a=sum-i;
    printf("%d",a+1);
    return 0;
}
