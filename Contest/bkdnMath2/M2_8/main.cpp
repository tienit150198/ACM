#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n, q, num = 0;
ll a[Max], p1[Max];
bool p[Max];

bool isPrime(ll a) {
    if(a < 2)
        return false;

    ll tmp = sqrt(a);

    for(ll i = 2 ; i <= tmp ; i++) {
        if(!(a%i))
            return false;
    }
    return true;
}

int main() {
    fast

    for(ll i = 2 ; i <= Max ; i++) {
        if(isPrime(i)) {
            p[i] = true;
            p1[num++] = i;
        }
    }

    cin >> n >> q;

    for(ll i = 0 ; i < n ; i++) {
        ll tmp;
        cin >> tmp;
        a[tmp]++;
    }

    while(q--) {
        ll t;
        cin >> t;
        if(t == 0) {
            cout << "NO" << endl;
            continue;
        }
        bool f = false;
        ll i = t;
        ll save[100], numsave = 0;
        for(i = t ; i >= 1 ; i--) {
            if(t%i == 0 && a[i]) {
                f = true;
                save[numsave++] = i;

                if(numsave > 100)
                    break;
            }
        }

        if(!f) {
            cout << "NO" << endl;
        } else {
            f = false;
            ll ttt = t;
            for(ll ii = 0 ; ii < numsave ; ii++) {
                ttt = t;
                if(save[ii] == 1) {
                    for(ll j = 0 ; j < num ; j++) {
                        if(t% p1[j] == 0) {
                            ll div = t / p1[j];
                            if(p[p1[j]] && p[div]) {
                                f = true;
                                break;
                            }
                        }
                    }

                } else {
                    ll _size = num;
                    do {
                        ttt /= save[ii];
                        for(ll j = 0 ; j < _size ; j++) {
                            if(ttt% p1[j] == 0) {
                                ll div = ttt / p1[j];
                                if(p[p1[j]] && p[div]) {
                                    f = true;
                                    break;
                                }
                            }
                        }

                        if(f)
                            break;
                    } while(ttt > 0);
                }

                if(f) {
                    break;
                }
            }
            if(f) {
                cout << "YES" << endl;
            } else
                cout << "NO" << endl;

            /*      if(i == 1) {
                      f = false;
                      for(ll j = 0 ; j < num ; j++) {
                          if(t% p1[j] == 0) {
                              ll div = t / p1[j];
                              if(p[p1[j]] && p[div]) {
                                  f = true;
                                  break;
                              }
                          }
                      }

                      if(f) {
                          cout << "YES" << endl;
                      } else
                          cout << "NO" << endl;
                      continue;
                  }**/
            /*    f = false;
                ll _size = num;
                do {
                    t /= i;
                    for(ll j = 0 ; j < _size ; j++) {
                        if(t% p1[j] == 0) {
                            ll div = t / p1[j];
                            if(p[p1[j]] && p[div]) {
                                f = true;
                                break;
                            }
                        }
                    }

                    if(f)
                        break;
                } while(t > 0);

                if(f) {
                    cout <<t << " -> " << i <<  " YES" << endl;
                } else
                    cout << "NO" << endl;*/
        }
    }

    return 0;
}
