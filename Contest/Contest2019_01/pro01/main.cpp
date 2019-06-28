#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll _gcd(ll a, ll b){
    if(b == 0)
        return a;
    return _gcd(b,a%b);
}

bool isCheck(ll a, ll b, ll c){
    if(_gcd(a,b) == 1){
        a %= 2;
        b %= 2;
        c %= 2;
        return a == 1 && c == 1 && b == 0;
    }
}

struct m{
    ll a, b, c;
};

ll n, num = 0;
ll c = 0;
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    ll t1 = 0, t2 = 0, t3 = 1;
    if(n <= 5){
        cout << 0;
        return 0;
    }
    while(true){
        t1++;
        t2++;
        t3 += 2;

        ll tmp = t1 * t3 + t2;
        ll tmp1 = t3*t3 + tmp*tmp;
        tmp1 = sqrt(tmp1);
        if(tmp1 > n+300)
            break;
        cout << t1 << " " << t2 << " " << t3 << " " << tmp << " " << tmp1 << endl;
        if(isCheck(t3,tmp,tmp1))
            c++;
    }
    cout << c;


    return 0;
}
