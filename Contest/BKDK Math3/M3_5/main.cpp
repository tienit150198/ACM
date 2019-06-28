#include <bits/stdc++.h>
#define ll long long int
#define Max 100060011
#define limit 10001
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

bool a[Max];
ll f[limit];
ll t,n;

void sieve(){
    for(ll i = 0 ; i <= Max ; i++)
        a[i] = false;
    for(ll i = 2 ; i*i <= Max ; i++){
        if(!a[i]){
            for(ll j = i*i ; j <= Max ; j += i)
                a[j] = true;
        }
    }
}

int main() {
    fast
    sieve();
    for(ll i = 3 ; i <= limit ; i += 2){
        ll x = 0;
        ll t = i*i;
        if(!a[t])
            x++;
        t = t - i + 1;
        if(!a[t])
            x++;
        t = t - i + 1;
        if(!a[t])
            x++;
        t = t - i + 1;
        if(!a[t])
            x++;

        f[i] = f[i - 2] + x;
    }

    cin >> t;

    while(t--){
        cin >> n;

        double tile = f[n] * 100.0 / (double) (n * 2 - 1);
        cout << fixed << setprecision(6) << tile << endl;
    }

    /*

double pi = 8 * 100.0/13;
	cout << fixed << setprecision(6) << pi <<endl;
    làm tròn
*/


    return 0;
}
