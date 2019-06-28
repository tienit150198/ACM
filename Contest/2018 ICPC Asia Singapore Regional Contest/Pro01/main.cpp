#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
ll tmp1, tmp2, tmp3;

void dec(ll &a, ll b){
    while(a%b != 0){
        a--;
    }
}

ll isSum(ll x, ll a){
    return ((x + a) * x / a) / 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    n--;
    tmp1 = n;
    tmp2 = n;
    tmp3 = n;
    dec(tmp1,3);
    dec(tmp2,5);
    dec(tmp3,15);
  //  cout << tmp1 << " " << tmp2 << endl;

    if(n < 3){
        cout << 0;
    }
    else if(n < 5){
        cout << 3;
    }
    else{
        cout << isSum(tmp1,3) + isSum(tmp2,5) - isSum(tmp3,15);
    }

    return 0;
}
