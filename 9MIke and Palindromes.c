#include <stdio.h>
#include<string.h>
int main()
{
    char str[15];
    scanf("%s",str);
    int start=0;
    int len=strlen(str);
    int end=len-1;
    int diff=0;
    while(start<end) {
        if (str[start] != str[end]){
            diff++;
        }
        end--;
        start++;
    }
    if(diff>1) //if diff greater than 1 print no
        printf("NO");
    else {
        if(diff==0 && len%2==0) //if diff is 0 and the number of char is even print no
        printf("NO");
        else //else print yes 
        printf("YES");
        }
    
        return 0;
} 
