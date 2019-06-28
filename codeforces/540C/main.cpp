#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
ll a[Max];

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    for(ll i = 0 ; i < n*n ; i++) {
        cin >> a[i];
    }
    if(n == 1) {
        cout << "YES" << endl << a[0];
        return 0;
    }
    if(n == 2) {
        bool f = false;
        for(ll i = 0 ; i < n*n-1 ; i++) {
            if(a[i] != a[i + 1]) {
                f = true;
                break;
            }
        }
        if(f) {
            cout << "NO";
        } else {
            cout << "YES" << endl;
            for(ll i = 0 ; i < n ; i++) {
                for(ll j = 0 ; j < n ; j++)
                    cout << a[i+j] << " ";
                cout << endl;
            }
        }
        return 0;
    }

    sort(a,a+n*n);

    if(n%2) {
        bool cheo = false, ngoai = false;
        ll _cheo = 0, _ngoai = 0;
        ll t = 1;
        ll tmp = n*2 - 1;
        for(ll i =  0; i < n*n-1 ; i++) {
            if(a[i] == a[i + 1]) {
                t++;
            } else {
                if(t == tmp && !cheo) {
                    cheo = true;
                    _cheo = a[i-1];
                }
                else if(t == n*n - tmp && !ngoai) {
                    ngoai = true;
                    _ngoai = a[i-1];
                }
                t = 1;
            }
        }
        if(t == tmp && !cheo) {
            cheo = true;
            _cheo = a[n*n-1];
        }
        else if(t == n*n - tmp && !ngoai) {
            ngoai = true;
            _ngoai = a[n*n-1];
        }
        if(cheo != true || ngoai != true) {
            cout << "NO";
            return 0;
        }
        cout << "YES" << endl;
        for(ll i = 0 ; i < n ; i++) {
            for(ll j = 0 ; j < n ; j++) {
                if(i + j == n - 1 || i == j)
                    cout << _cheo << " ";
                else
                    cout << _ngoai << " ";
            }
            cout << endl;
        }

    } else {
        bool goc = false, vien = false, giua = false;
        ll _goc = 0, _vien = 0, _giua = 0;
        ll tmp = 4 + (n-2)*2;
        ll t = 1;
        for(ll i = 0 ; i < n*n-1 ; i++) {
            if(a[i] == a[i + 1]) {
                t++;
            } else {
                if(t == 4 && !goc) {
                    goc = true;
                    _goc = a[i - 1];
                } else if(t == tmp - 4 && !vien) {
                    vien = true;
                    _vien = a[i - 1];
                } else if(t == n*n - tmp && !giua) {
                    giua = true;
                    _giua = a[i - 1];
                }
                t = 1;
            }
        }
        if(t == 4 && !goc) {
            goc = true;
            _goc = a[n*n - 1];
        } else if(t == tmp - 4 && !vien) {
            vien = true;
            _vien = a[n*n - 1];
        } else if(t == n*n - tmp && !giua) {
            giua = true;
            _giua = a[n*n - 1];
        }

        if(!goc || !vien || !giua){
            cout << "NO";
            return 0;
        }
        cout << "YES" << endl;
        for(ll i = 0 ; i < n ; i++){
            for(ll j = 0 ; j < n ; j++){
                if(i == 0 && j == 0 || i == n - 1 && j == n - 1 || i == 0 && j == n - 1 || i == n - 1 && j == 0){
                    cout << _goc << " ";
                }else if(j == 0 || j == n - 1)
                    cout << _vien << " ";
                else
                    cout << _giua << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
