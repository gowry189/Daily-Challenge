#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    double x,y;
    cin >> n >> x >> y;
    set <double> s;
    while(n--) {
        double x1,y1,slope;
        cin >> x1 >> y1;
        if(x1 == x) {
            slope = 100000000; 
        }
        else {
            slope = (y1-y)/(x1-x);
        }
        s.insert(slope);
    }
    cout << s.size() << endl;
    return 0;
}

