#include <bits/stdc++.h>
#define ll long long int
#define PI 3.14159265
using namespace std;
double alpha;

struct m{
    double x, y;
};

m a, b;

int main()
{
    cin >> a.x >> a.y >> alpha;

    b.x = a.x * cos(alpha * M_PI / 180.0)*1.0 - a.y * sin(alpha * M_PI / 180.0)*1.0;
    b.y = a.x * sin(alpha * M_PI / 180.0)*1.0 + a.y * cos(alpha * M_PI / 180.0)*1.0;

    printf("%.4lf %.4lf", floor(b.x*100000100000.0)/100000100000.0, floor(b.y*100000100000.0)/100000100000.0);

    return 0;
}
