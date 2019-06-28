#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, k;
ll a[20];

void out(){
    for(ll i = 0 ; i < k ; i++)
        cout << a[i];

    cout << endl;
}

void gen(){
    for(ll i = 0 ; i < k; i++)
        a[i] = 1;

    ll i = k- 1;
    while(true){
        out();
        i = k - 1;
        while(i >= 0 && a[i] == n)
            i--;

        if(i < 0)
            break;

        a[i] = a[i] + 1;
        for(ll j = i + 1; j < k ; j++)
            a[j] = 1;

    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> k;

    cout << pow(n,k) << endl;

    gen();

    return 0;
}
