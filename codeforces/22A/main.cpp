#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

set<ll> t;
ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        t.insert(tmp);
    }

    set<ll>::iterator it = t.begin();
    if(t.size() == 1){
        cout << "NO";
        return 0;
    }
    it++;
    cout << *it;

    return 0;
}
