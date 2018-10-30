#include<bits/stdc++.h>
using namespace std;

int main() {
    //taking a string
    string str;
    cin>>str;
    char check = 'a';
    bool f = false;
    
    /*traversing through the entire length of the string and 
    checking if the i th charecter is same as that of check or less that that.
    If the condition is satistied then change the i th charecter to the 
    checked one. After each check the checked alphabet is made the next.  */
    
    for(int i=0; i<str.size(); i++) {
        if(str[i]<= check) {
            str[i] = check;
            if(str[i] == 'z'){
                f = true;
                break;
            }
         check = check + 1;
        }
       
    }
    if(f){
        cout<<str<<endl;
    }
    else {
        cout<<-1<<endl;
    }
} 
