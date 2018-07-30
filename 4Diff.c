#include<stdio.h>
#include<string.h>
int main(){
    char s[100000];
    int n,len,c=0;
    scanf("%d",&n);
    scanf("%s",s);
    len=strlen(s);
    if(n<27){
        for(int i=0;i<len;i++) {
            for(int j=i+1;j<len;j++) {
                if (s[i]==s[j]){
                    c++;
                    break;
                }
            }
        }
    }
    else
    c=-1;
    if(c<26)
    printf("%d",c);
    else
    printf("-1");
    return 0;
} 
