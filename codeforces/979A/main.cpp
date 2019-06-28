#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

bool checkPow2(ll a){
    return !(a & (a - 1));
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    n++;
    if(n%2 == 0 || n == 1){
        cout << n/2;
    }
    else{
        cout << n;
    }



    return 0;
}
