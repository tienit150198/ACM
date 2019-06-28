#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

string str, str1;

int main() {
    ios::sync_with_stdio(false);
    cin >> str >> str1;

    ll ans = str.size() + str1.size();
    ll i = str.size() - 1;
    ll j = str1.size() - 1;
    while(i >= 0 && j >= 0 && str[i] == str1[j]) {
        ans -= 2;
        i--, j--;
    }
    cout << ans;

    return 0;
}
