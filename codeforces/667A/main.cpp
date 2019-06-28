#include <bits/stdc++.h>
#define ll long long int
#define Max 5000
#define _pi 3.1415926535897932384626433832795
#define ipair pair<string,string>

using namespace std;

// pi * r*r * h

ll d, h, e, v;

int main() {
    cin >> d >> h >> v >> e;

    double r = d/2.0;
    double _d = _pi * r * r * h;
    double _e = e * _pi * r * r;

    if(v <= _e){
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    cout << fixed << setprecision(12) << _d /(v - _e)*1.0;

    return 0;
}
