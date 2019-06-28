#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n1, n2, n3;
ll sum1= 0, sum2 = 0, sum3 = 0;
ll m[Max];

void in(ll n, ll &sum){
    stack<ll> s;
    for(ll i = 0; i < n ; i++){
        ll tmp;
        cin >> tmp;
        s.push(tmp);
    }
    while(!s.empty()){
        sum += s.top();
        m[sum]++;
        s.pop();
    }
}

int main() {
    fast
    freopen("input.in", "r", stdin);
    cin >> n1 >> n2 >> n3;

    in(n1,sum1);
    in(n2,sum2);
    in(n3,sum3);

    for(ll i = Max ; i >= 1 ; i--){
        if(m[i] == 3){
            cout << i;
            return 0;
        }
    }
    cout << 0;

    return 0;
}
