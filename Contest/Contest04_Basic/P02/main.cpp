#include<bits/stdc++.h>
#define ll long long int
using namespace std;

struct td {
    ll x, y;
    float kc;
};
td a, b, c;

float cal(td a, td b) {
    float t = (a.x - b.x);
    float t1 = (a.y - b.y);
    float res = sqrt(t * t + t1 * t1);

    return res;
//    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y)* (a.y - b.y));
}

bool checkTriangle() {
    if(a.kc + b.kc > c.kc && a.kc + c.kc > b.kc && b.kc + c.kc > a.kc)
        return true;
    return false;
}

int main() {
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

    a.kc = cal(a,b);
    b.kc = cal(b,c);
    c.kc = cal(c,a);

//    printf("%f %f %f \n", a.kc, c.kc, b.kc);

    if(checkTriangle()) {
        float p = (a.kc + c.kc + b.kc)/2;
//        printf("%f\n", p);
        float s = sqrt(p * (p - a.kc) * (p - c.kc) * (p - b.kc));

        printf("%.3f", s);
    } else
        cout << -1;



    return 0;
}
