#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

ll n;
ll a[Max], f[Max];
vector<ll> odd;

int main() {
    fast
    cin >> n;

    ll sumEven = 0, sumOdd = 0;
    ll minOdd = INT_MAX, maxOdd = INT_MIN;
    for(ll i = 1 ; i <= n ; i++){
        cin >> a[i];
        f[i] = INT_MIN;
        if(a[i]%2 == 0 && a[i] > 0)
            sumEven += a[i];
        else if(a[i] & 1){
            if(a[i] < 0){
                maxOdd = max(maxOdd, a[i]);
            }else{
                sumOdd += a[i];
                minOdd = min(minOdd, a[i]);
            }
        }
    }

    ll sum = sumEven + sumOdd;
    if(sum%2 == 0){
        sum = sum - min(minOdd, - maxOdd);
    }
    cout << sum;

    return 0;
}
