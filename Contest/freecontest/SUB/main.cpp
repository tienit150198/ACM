#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;



int main() {
    freopen("19.in", "r", stdin);
    ios::sync_with_stdio(false);
    ll t;
    cin >> t;
    ll n;

    while(t--){
        cin >> n;

        ll a[Max], f[Max];
        f[0] = 0;
        ll _max = 0;
        for(ll i = 1 ; i <= n ; i++){
            cin >> a[i];

            _max = max(a[i], _max + a[i]);
            f[i] = max(f[i - 1] + a[i], _max);
        }


        f[0] = INT_MIN;
        _max = INT_MIN;
        ll _max1 = INT_MIN;
        for(ll i = 1 ; i <= n ; i++){
            _max = max(_max,f[i]);
            _max1 = max(f[i-1], max(_max1+a[i], _max1));
        }
        _max1 = max(_max,_max1);
        cout <<_max1 << " " << _max << endl;
    }

    return 0;
}
/*
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100005;
const int oo = 1000000007;

int nTest, n, a[MAXN];

int task1() {
    int res = 0;
    bool allNegative = true;

    for(int i = 0; i < n; ++i) {
        if (a[i] >= 0) {
            allNegative = false;
            res += a[i];
        }
    }

    if (allNegative)
        res = *max_element(a, a+n);
    return res;
}

int task2() {
    int sum = 0, res = -oo;
    for(int i = 0; i < n; ++i) {
        sum = sum + a[i];
        res = max(res, sum);
        sum = max(sum, 0);
    }

    return res;
}

int main() {
    // freopen("SUB.INP", "r", stdin);
    // freopen("SUB.OUT", "w", stdout);

    scanf("%d", &nTest);
    while (nTest--) {
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
            scanf("%d", &a[i]);

        printf("%d %d\n", task1(), task2());
    }

}

*/
