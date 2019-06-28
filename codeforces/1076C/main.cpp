#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll d;

int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin >> t;

    while(t--){
        cin >> d;

        double D = d*d - 4*d;
        if(D < 0){
            printf("N\n");
            continue;
        }

        double a = (d + sqrt(D)) / 2;
        double b = (d - sqrt(D)) / 2;

        printf("Y %.9f %.9f\n", a, b);

    }

    return 0;
}
