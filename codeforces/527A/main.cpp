#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

/*
10 7
7 3
4 3
3 1
2 1
1 1



*/

ll a, b;

int main() {
    ios::sync_with_stdio(false);
    cin >> a >> b;

    ll t = 0;

    if(b > a)
        swap(a,b);

    while(a != 0 && b != 0) {
        if(a >= b) {
            t += a/b;
            a %= b;
            if(b > a)
                swap(a,b);
        }
    }

    cout << t;

    return 0;
}
