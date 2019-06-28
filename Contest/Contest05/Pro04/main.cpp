#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void tinhLPS(string t, ll m, ll lps[]){
    ll len = 0, i = 1;
    lps[len] = 0;

    while(i < m){
        if(t[i] == t[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0)
                len = lps[len -1];
            else{
                lps[i] =0 ;
                i++;
            }
        }
    }
}

void KMPSearch(string t, string s){
    ll m = t.size();
    ll n = s.size();

    bool flag = false;
    ll lps[m];

    tinhLPS(t,m,lps);

    ll i = 0, j = 0;
    while(i < n){
        if(t[j] == s[i]){
            i++;
            j++;
        }
        if(j == m){
            flag = true;
            cout << i - j << endl;
            j = lps[j - 1];
        }
        else if(i < n && t[j] != s[i]){
            if(j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    if(!flag)
        cout << -1;
}

int main()
{
    ios::sync_with_stdio(false);
    string s, t;
    cin >> s >> t;

    KMPSearch(t,s);
    return 0;
}
