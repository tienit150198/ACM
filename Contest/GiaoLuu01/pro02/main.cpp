#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

bool isPerfectSquare(ll n){
    ll s = sqrt(n);
    return s*s == n;
}

bool isFibo(ll n){
    return ((isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n-4)));
}

int main()
{
    cin >> n;

    if(isFibo(n)){
        cout << "yes";
    }else
        cout << "no";



    return 0;
}
