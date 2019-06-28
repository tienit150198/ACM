#include <bits/stdc++.h>

using namespace std;

int n;
int a[200], f[200];

int main() {
    cin >> n;
    bool ff = false;
    int res = 0;
    for(int i = 1 ; i <= n ; i++) {
        cin >> a[i];
        f[i] = -1;
        res++;
        if(!a[i]){
            ff = true;
            res--;
            f[i] = 1;
        }
    }

    if(n == 1) {
        cout << !a[1];
        return 0;
    }
    if(!ff) {
        cout << n-1;
        return 0;
    }

    int _max = 0, _sum = 0;
    for(int i = 1 ; i <= n ; i++) {
        _sum += f[i];
        _max = max(_max,_sum);
        _sum = max(_sum,0);
    }

    cout <<res + _max;

    return 0;
}
