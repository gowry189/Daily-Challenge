#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n,d;
    cin>>n>>d;
    ll x[n];
    for(ll i=0;i<n;i++)
    {
        cin>>x[i];
    }
    ll count=2;
    for( ll i=0;i<n-1;i++)
    {
        ll l=x[i];
        ll r=x[i+1];
    if (l - r >= 2*d)
    {
    ll x = l + d;
    ll y = r - d;
    if (x == y)
    {
         count = count + 1;
    }
    else
    {
          count = count + 2;
         
     }
    }

}
    cout<<count;
return 0;
}
