#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll a, b;

int main() {
    ios::sync_with_stdio(false);
    cin >> a >> b;

    if(a + b == 0){
        cout << "NO";
        return 0;
    }

    if(abs(a - b) <= 1){
        cout << "YES";
        return 0;
    }

    cout << "NO";

    return 0;
}
