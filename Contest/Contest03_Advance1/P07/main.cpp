#include <bits/stdc++.h>
#define ll long long int
#define Max 100011
using namespace std;

ll a[Max];
ll t, n;
void sieve(){
    for(ll i = 1 ; i < Max ; i++)
        a[i] = 1;
    a[0] = 0;
    a[1] = 0;
    ll tmp = sqrt(Max);
    ll t = 1;
    for(ll i =2 ; i <= tmp ; i++){
        for(ll j = i +1; j <= Max ; j ++)
            if(j%i)
                a[j]++;
            else
                a[j] += i;
    }

    for(ll i = 3;  i < Max ; i++){
        a[i] += a[i - 1];
    }
}

int main()
{
    sieve();
    ios::sync_with_stdio(false);
//    for(ll i = 0 ; i < 20 ; i++)
//        cout <<i << " -> " <<  a[i] << endl;
    cin >> t;
    while(t--){
        cin >> n;

        cout << a[n] << endl;
    }
    return 0;
}
