#include <bits/stdc++.h>
#define ll long long int
#define Max 300007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

struct m{
    double A, B, h;
};

m a[Max];
ll x[Max];
ll n, num = 0;

bool cmp(m a, m b){
    return (a.h > b.h);
}

int main() {
    fast
    cin >> n;

    ll s = 0;

    for(ll i = 1 ; i <= n ; i++){
        cin >> x[i];
        s += x[i];
    }

    sort(x+1,x+n+1,greater<ll>());
    ll xx = 0, c = 0;
    for(ll i = 1 ; i <= n ; i++){
        xx += x[i];
        c++;

        a[num].A = c/(double)n * 100;
        a[num].B = xx / (double)s * 100;
        a[num].h = a[num].B - a[num].A;
        num++;
    }



    sort(a,a+num,cmp);

    cout << fixed << setprecision(6) << a[0].A << " " <<a[0].B;
    return 0;
}
/*
double pi = 8 * 100.0/13;
	cout << fixed << setprecision(6) << pi <<endl;
    làm tròn
*/
