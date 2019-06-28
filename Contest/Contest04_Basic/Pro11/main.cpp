#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float denta = b * b - 4 * a * c;
    if(denta < 0){
        cout <<"VO NGHIEM";
    }
    else if(denta == 0){
        float s = -b / (2* a);
        printf("%.2f", s);
    }
    else{
        denta = sqrt(denta);
        float x1 = (-b + denta) / (2* a);
        float x2 = (-b - denta) / (2* a);

        if(x1 < x2){
            printf("%.2f %.2f", x1, x2);
        }
        if(x1 > x2){
            printf("%.2f %.2f", x2, x1);
        }
    }
    return 0;
}
