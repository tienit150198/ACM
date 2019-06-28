#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;


struct m{
    ll val, indx, sum;
};
m a[Max];

int main()
{
    freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cout << 0 << " " << endl << 4 << " " << 6 << endl;
    n = 100000;
    string str = "";

    for(ll i = 0 ; i < n ; i++)
        str += 'D';
    cout << n << endl << str << " " << str.size();

    return 0;
}
