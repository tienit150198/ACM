#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
ll a[1007];

ll c = 0;

void _swap(ll &a, ll &b, ll &c){
    if(a > b)
        swap(a,b);
    if(a > c)
        swap(a,c);
    if(b > c)
        swap(b,c);
}

bool isCheck(ll a, ll b, ll c, ll t1, ll t2, ll t3){
    _swap(a,b,c);
    _swap(t1,t2,t3);

    if(a != t1 || b != t2 || c != t3)
        return true;
    return false;
}

ll isSearch(ll l, ll r, ll key){
    ll mid = (l + r) / 2;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ll tmp;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    ll t1, t2, t3;
    for(ll i = 0 ; i < n-1; i++){
        for(ll j = i + 1 ; j < n; j++){
            if(a[i] == a[i - 1] || !isCheck(a[i],a[j],0-(a[i] + a[j]),t1,t2,t3))
                continue;
            tmp = isSearch(j+1,n-1,0-(a[i] + a[j]));
            t1 = a[i];
            t2 = a[j];
            t3 = 0-(a[i] + a[j]);
            if(tmp != -1){
          //      cout << 0-(a[i] + a[j]) << endl;
                c++;
            }
        }
    }
    cout << c;


    return 0;
}
