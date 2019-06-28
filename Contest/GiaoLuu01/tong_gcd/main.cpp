#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
using namespace std;



ll n;
ll phi[Max];
ll gcd[Max];

void sievePhi(){
    for(ll i = 2 ; i <= Max ; i++)
        phi[i] = i;
    for(ll p = 2; p <= Max ; p++){
        if(phi[p] == p){
            phi[p] = p - 1;
            for(ll i = p*2 ; i <= Max ; i += p)
                phi[i] = (phi[i]/p)*(p-1);
        }
    }
   /* for(ll i = 2 ; i <= Max ; i++)
        phi[i] += phi[i - 1];*/
}

void sieveGCD(){
    for(ll i = 1 ; i <= Max ; i++){
        for(ll j = 2 ; i * j <= Max ; j++){
            gcd[j*i] += i * phi[j];
        }
    }
    for(ll i = 2 ; i <= Max ; i++)
        gcd[i] += gcd[i - 1];
}

int main()
{
    sievePhi();
    sieveGCD();
  /*  cin >> n;
    for(ll i = 1 ; i <= n ; i++){
        cout << i << " -> " << gcd[i] << " : " << phi[i] << endl;
    }*/

    ll t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << gcd[n] << endl;
    }


    return 0;
}
