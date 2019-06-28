#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
ll a[Max];
stack<ll>s;

int main() {
    fast
    cin >> n;

    for(ll i = 1 ; i <= n; i++)
        cin >> a[i];
    sort(a,a+n+1);

    sort(a,a+n+1);

    for(ll i = 1 ; i <= n ; i++){
        if(i & 1){
            cout << a[i] << " ";
        }else
            s.push(a[i]);
    }

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }


    return 0;
}
