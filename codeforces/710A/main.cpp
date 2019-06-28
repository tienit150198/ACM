#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

string str;

int main() {
    ios::sync_with_stdio(false);
    cin >> str;

    if(str[0] == 'a' || str[0] == 'h')
        if(str[1] == '1' || str[1] == '8')
            cout << 3;
        else
            cout << 5;
    else if(str[1] == '1' || str[1] == '8')
        cout << 5;
    else
        cout << 8;

    return 0;
}
