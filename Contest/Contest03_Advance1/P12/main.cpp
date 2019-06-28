#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,k;
ll a[20], b[21];
bool flag = false;

bool cal(){
    ll sum = 0;
    for(ll i = 0 ; i < n; i++){
        if(a[i] == 1){
            sum += b[i];
        }
    }
    if(sum == k){
        flag = true;
        return true;
    }

    return false;
}

void gen(){
    for(ll i = 0 ; i < n; i++)
        a[i] = 0;

    ll i = n - 1;
    while(true){
        i = n - 1;
        if(cal())
            return;

        while(i >= 0 && a[i] == 1)
            i--;
        if(i < 0)
            return;

        a[i] =1;
        for(ll j = i + 1; j < n; j++)
            a[j] = 0;

    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n; i++)
        cin >> b[i];
    cin >> k;

    gen();

    if(flag)
        cout <<"Yes";
    else
        cout <<"No";

    return 0;
}
