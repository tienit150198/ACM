#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n, k;
bool isCheck(ll x, ll y){
    if(x > n || y > n)
        return true;
    return false;
}

bool checkTwo(ll x, ll y){
    if(isCheck(x,y))
        return true;
    if(y - x == 1 || y == 1 && x == 3)
        return false;
    return true;
}

bool checkOne(ll x, ll y){
    if(isCheck(x,y))
        return true;

    if(x == y)
        return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);

    cin >> n >> k;

    ll t,x,y;
    ll res = 0;
    for(ll i = 0 ; i < k ; i++){
        cin >> t >> x >> y;

        if(t == 2){
            res += checkTwo(x,y);
        }
        else if(t == 1){
            res += checkOne(x,y);
        }
    }

    cout << res;

    return 0;
}
