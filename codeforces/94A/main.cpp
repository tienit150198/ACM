#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

string s, str[10];

int main() {
    ios::sync_with_stdio(false);
    cin >> s;

    for(ll i = 0 ; i < 10 ; i++){
        cin >> str[i];
    }

    while(s.size()){
        ll i = 0;
        while(i < 10){
            if(s.find(str[i]) == 0)
                break;
            i++;
        }
        cout << i;
        s = s.substr(10);
    }

    return 0;
}
