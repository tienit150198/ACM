#include <bits/stdc++.h>
#define ll long long int
#define Max 1011
using namespace std;

string s, t;
ll f[Max][Max];

ll isMin(ll a, ll b, ll c){
	ll _min = a;
	if(_min > b)
		_min = b;
	if(_min > c)
		_min = c;

	return _min;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> s;
    cin >> t;

    s = ' ' + s;
    t = ' ' + t;

    ll m = s.size();
    ll n = t.size();

	for(ll i = 0 ; i <= m ; i++)
		f[i][0] = INT_MAX;
	for(ll i = 0 ; i <= n ; i++)
		f[1][i] = INT_MAX;

	for(ll i = 0 ; i <= n; i++)
		f[0][i] = i;
	for(ll i = 0 ; i <= m ; i++)
		f[i][0] = i;

 /*   for(ll i = 0 ; i <= m ; i++){
        for(ll j = 0 ; j <= n ; j++){
            cout << f[i][j] << " ";
        }

        cout << endl;
    }
    cout << endl << endl;*/

    for(ll i = 1 ; i <= m; i++) {
        for(ll j = 1 ; j <= n; j++) {
        	if(s[i] == t[j]){
        		f[i][j] = f[i - 1][j - 1];
			}
			else{
				f[i][j] = isMin(f[i][j - 1], f[i - 1][j], f[i - 1][j - 1]) + 1;
			}
        }
    }

  /*  ll res = 0;
    for(ll i = 0 ; i <= m; i++) {
        for(ll j = 0 ; j <= n; j++){
            cout << f[i][j] << " ";
//            res = max(f[i][j],res);
        }

        cout << endl;
    }*/
//    cout << res;
    cout << f[m][n];

    // truy vet
    while(m != 0 || n != 0){
        if(s[m] == t[n]){
            m--;
            n--;
        }
        else{
            cout << s << "->";
            if(f[m][n] == f[m][n-1] + 1){// phep chen
                cout << "insert " << " " << t[n];
                string tmpss =t[n]+ "";
                s.insert(m,tmpss);
                n--;
            }
            else if(f[m][n] == f[m-1][n-1] + 1){    // phep thay
                cout << "replace" << " "<< s[m]<< " -> " <<t[n];
                s[m] = t[n];
                m--;
                n--;
            }
            else{   // phep xoa
                cout << "Delete" << " " << s[m];
                s.erase(m,1);
                m--;
            }
            cout << endl <<  s  << endl;
        }
    }

    return 0;
}
