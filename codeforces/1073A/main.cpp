#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

ll n;
string str;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;

    ll i = 0;
    bool f = true;
    while(i < str.size() - 1) {
        if(str[i] != str[i + 1]) {
            cout <<"YES" << endl << str[i] << str[i+1];
            f = false;
            break;
        }
        i++;
    }

    if(f)
        cout << "NO";

    return 0;
}
