#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;

    ll i = 1, j = n*n;

    while(i < j){
        ll t = 0;
        while(t < n/2){
        cout << i << " " << j << " ";
        i++, j--;
            t++;
        }
        cout << endl;
    }

    return 0;
}
