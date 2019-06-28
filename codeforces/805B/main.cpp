#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;

string str = "aabb";

int main() {
    ios::sync_with_stdio(false);
    cin >> n;

    ll i = 0;

    while(n--){
        cout << str[i];
        i++;
        if(i >= 4)
            i = 0;
    }

    return 0;
}
