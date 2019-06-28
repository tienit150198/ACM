#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
string str;
string pattern[] = {"GRB", "GBR", "RGB", "RBG", "BGR", "BRG"};


int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;

    if(n == 1){
        cout << 0 << endl << str;
        return 0;
    }
    string ansStr;
    int ansLeng = INT_MAX;

    ll k = 0;
    while(k < 6){
        string tmp = pattern[k];
        ll leng = 0;
        string strTMP = "";
        ll j = 0;
        for(ll i = 0 ; i < n ; i++, j++){
            if(j >= 3)
                j = 0;
            if(str[i] != tmp[j]){
                leng++;
            }
            strTMP += tmp[j];
        }
        if(leng < ansLeng){
            ansStr = strTMP;
            ansLeng = leng;
        }

        k++;
    }

    cout << ansLeng << endl << ansStr;

    return 0;
}
