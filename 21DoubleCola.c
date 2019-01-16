#include<bits/stdc++.h>
#define ll long long
#include <string>
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll r = 1;
    while(n > r*5) {
        n = n-(r*5);
        r = r*2;
    }
    ll a = (n-1)/r;
    
    if (a == 0){
        cout << "Sheldon"<<endl;
    }
    
    else if(a == 1){
        cout << "Leonard" << endl;
    }
    
    else if(a == 2){
        cout << "Penny" << endl;
    }
    
    else if(a == 3){
        cout << "Rajesh" << endl;
    }
    
    else{
        cout << "Howard" << endl;
    }
    return 0;
}
