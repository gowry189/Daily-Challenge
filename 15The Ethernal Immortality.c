#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll a;
    ll b;
    cin>>a>>b;
    if(b<a){
        cout<<0<<endl;
    }
    else{
        ll ans = 1;
        for(ll i = a+1; i <= b; i++){
            ans = (ans*i)%10;
            if(ans == 0){
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
} 
