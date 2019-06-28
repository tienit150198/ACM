#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;

int main() {
    fast
    cin >> n;
    for(ll i = 1 ; i <= n ; i++){
        for(ll j = 1 ; j <= n; j++){
            if(i == 1 || j == 1 || j == n || i == n || i == j || (i + j) == n+1 || i == (n+1)/2 || j == (n+1)/ 2)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
