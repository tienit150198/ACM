#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
ll a[300], l[300];
int main()
{
    ios::sync_with_stdio(false);
    do{
        cin >> n;
        if(n){
            for(ll i = 0 ; i < n; i++){
                cin >> a[i];
                l[i] = 0;
            }

            l[0] = 0;
            ll _max = 0;
            for(ll i = 1 ; i < n; i++){
                for(ll j = 0 ; j < i ; j++){
                    if(a[j] < a[i])
                        l[i] = max(l[i],l[j] + 1);
                }
                _max = max(_max,l[i]);
            }
            priority_queue<ll, vector<ll>, greater<ll> > pq;
            for(ll i = n - 1 ; i >= 0; i--){
               // cout << setw(3) << l[i];
                if(l[i] == _max){
                    _max--;
                    pq.push(a[i]);

                }
            }
            cout << pq.size() << " ";
            while(!pq.empty()){
                cout << pq.top() << " ";
                pq.pop();
            }
            cout << endl;
        }
    }while(n != 0);
    return 0;
}
