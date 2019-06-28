#include <bits/stdc++.h>
#define ll long long int
#define Max 2000111
using namespace std;

ll a[Max];


bool isPrime(ll a){
    if(a < 2)
        return false;
    ll tmp = sqrt(a);
    for(ll i = 2 ; i <= tmp ; i++)
        if(!(a%i))
            return false;
    return true;
}

void sieve(){
    bool Prime[Max];
    for(ll i = 0 ; i <= Max ;i++)
        Prime[i] = true;

    for(ll i = 2 ; i * i < Max ; i++){
        for(ll j = i * i ; j < Max ; j += i)
            Prime[j] = false;
    }
    ll j =0;
    for(ll i = 2 ; i < Max ; i++){
        if(Prime[i])
            a[j++] = i;
    }
}

int main() {

    ios::sync_with_stdio(false);
    sieve();
    ll n;
   // srand(time(NULL));
    cin >> n;
//    n = rand()%100000000000;
 //   cout << n << endl;
//
//    for(ll i = 0 ; i < n ; i++)
//        cout << a[i] << " ";

    ll vl = 0, c = 0, i = 0;
    while(n != 1 && isPrime(n) == false){
        vl = 0, c = 0;
        while(!(n%a[i])){
            vl = a[i];
            c++;
//90000008987
            n /= a[i];
        }

        if(vl){
            cout << vl << " " << c << endl;
        }
        i++;
    }

    if(n != 1)
        cout << n << " " << 1;

    return 0;
}
