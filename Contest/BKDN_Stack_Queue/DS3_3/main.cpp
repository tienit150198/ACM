#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n, num = 1;
stack<ll> s;

int main() {
    fast
//    freopen("input.in", "r", stdin);
    cin >> n;

    while(n--){
        ll q, x;
        cin >> q;
        if(q == 1){
            cin >> x;
            if(s.empty()){
                s.push(x);
            }else
                s.push(max(x,s.top()));
        }else if(q == 2){
            if(!s.empty())
                s.pop();
        }else if(q == 3){
            cout << s.top() << endl;
        }
    }

    return 0;
}
