#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
bool a[2][100];

int main()
{
    ios::sync_with_stdio(false);

    cin >> n;

    for(ll i = 0 ; i < n*n; i++){
        ll h, v;
        cin >> h >> v;

        --h, --v;
        if(!a[0][h] && !a[1][v]){
            a[0][h] = true;
            a[1][v] = true;
            cout << i + 1 << " ";
        }
    }



    return 0;
}
