#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll t, d;

bool slove(ll d, double &a, double &b){
    double m = (0 + d) / 2, l = 0, r = d;
    while(l <= r){
        m = (l + r) / 2;
        a = m;
        b = d - m;

        if(a * b == a + b){
            return true;
        }
    }

}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--){
        cin >> d;

        if(d == 0){
            cout << "Y 0.000000 0.000000" << endl;
            continue;
        }
        double a, b;
        bool f = slove(d,a,b);
        if(!f){
            cout << "N" << endl;
            continue;
        }

        cout << "Y " << fixed << setprecision(10) << a << " " << b << endl;


    }

    return 0;
}
