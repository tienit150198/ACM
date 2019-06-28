#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

struct m {
    ll x, y;
    m(){};
    m(ll xx, ll yy){
        x = xx;
        y = yy;
    }
};

double tinhKc(m a, m b){
    double kc;
    kc = sqrt((a.x - b.x)* (a.x - b.x) + (a.y - b.y)*(a.y - b.y));
    return kc;
}

ll n;
m a[Max];

int main() {
    cin >> n;

    m maxx(INT_MIN,INT_MIN), minx(INT_MAX,INT_MAX), maxy(INT_MIN,INT_MIN), miny(INT_MAX,INT_MAX);
    for(ll i = 0 ; i < n ; i++) {
        cin >> a[i].x >> a[i].y;

        if(a[i].x > maxx.x)
            maxx = a[i];
        else if(a[i].x < minx.x)
            minx = a[i];
        if(a[i].y > maxy.y)
            maxy = a[i];
        else if(a[i].y < miny.y)
            miny = a[i];
    }

    double kcX = tinhKc(maxx,minx);
    double kcY = tinhKc(maxy,miny);
    double d = kcY;
    double Ox = (maxy.x + miny.x)/2.0, Oy = (maxy.y + miny.y)/2.0;
    if(kcX > kcY){
        d = kcX;
        Ox = (maxx.x + minx.x)/2;
        Oy = (maxx.y + minx.y)/2;
    }

    cout << fixed << setprecision(2) << Ox << " " << Oy << endl;
    cout << fixed << setprecision(2) << d;



    return 0;
}
