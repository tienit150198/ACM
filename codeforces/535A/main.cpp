#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll l[2], r[2];
ll a, b;

int main()
{
    ios::sync_with_stdio(false);
    ll q;
    cin >> q;

    while(q--){
        cin >> l[0] >> r[0] >> l[1] >> r[1];
        a = l[0];
        b = l[1];
        if(a == b){
            if(b + 1 <= r[1])
                b++;
            else
                a++;
        }
        cout << a << " " << b << endl;
    }


    return 0;
}
