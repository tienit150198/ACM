#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

string str;

int main() {
    fast
    cin >> str;
    ll n = str.size();
//    if(n <= 3){
//        cout << "NO";
//        return 0;
//    }
    bool fBA = false, fAB = false, fABA = false, fBAB = false;
    for(ll i = 0 ; i < n - 1; i++) {
        if(str[i] == 'B' && str[i + 1] == 'A') {
            if(i <= n - 2 && str[i + 2] == 'B') {
                if(!fBAB) {
                    fBAB = true;
                    i += 2;
                }
            } else {
                if(!fBA) {
                    fBA = true;
                    i++;
                }
            }
        }
        else if(str[i] == 'A' && str[i + 1] == 'B') {
            if(i <= n - 2 && str[i+2] == 'A') {
                if(!fABA) {
                    fABA = true;
                    i += 2;
                }
            } else {
                if(!fAB) {
                    fAB = true;
                    i++;
                }
            }
        }
    }
//    if(str[n - 2] == 'A' && str[n - 1] == 'B')
//        fAB = true;
//    else if(str[n - 2] == 'B' && str[n - 1] == 'A')
//        fBA = true;

    if((fAB && fBA) || (fABA && (fAB || fBA || fBAB)) || (fBAB && (fAB || fBA || fABA)))
        cout << "YES";
    else
        cout << "NO";


    return 0;
}
