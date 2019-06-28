#include <bits/stdc++.h>
#define ll long long int
#define Max 1007

using namespace std;

string str;
ll k;

int a[26];

int main() {
    ios::sync_with_stdio(false);
    cin >> str;
    cin >> k;

    ll ans = 0;
    for(ll i = 0 ; i < 26; i++)
        cin >> a[i];
    ll i;
    for(i = 0 ; i < str.size() ; i++)
        ans += (i+1) * a[str[i] - 97];

    sort(a,a+26);
    i++;
    while(k--){
        ans += i * a[25];
        i++;
    }
    cout << ans;

    return 0;
}
