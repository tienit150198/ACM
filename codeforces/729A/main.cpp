#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;
/*
32
abcdefogoghijklmnogoopqrstuvwxyz

*/
ll n;
string str;
//string temp = {"ogo","ogogo", "ogogogo"};
int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;
    ll a[107][2];
    ll num = 0;
    for(ll i = 0 ; i  < n ; i++) {
        if(str[i] == 'o') {
            bool flag = false;
            ll bd = i;
            while(str[i+1] == 'g' && str[i + 2] == 'o') {
                i += 2;
            }
            ll kt = i;
            if(bd != kt) {
                a[num][0] = bd;
                a[num][1] = kt;
                num++;
            }

        }
    }

    for(ll i = num-1 ; i >= 0; i--) {
        ll bd = a[i][0];
        ll kt = a[i][1];
//        cout << bd << " " << kt << endl;
        str.erase(bd,kt - bd + 1);
        str.insert(bd,"***");
//        cout << str << endl;
    }
    cout << str;


    return 0;
}
