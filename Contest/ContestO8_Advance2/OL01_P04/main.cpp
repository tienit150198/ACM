#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string s, t;

void tinhLPS(string t, ll m, ll lps[]){
    ll len = 0;
    lps[len] = 0;

    ll i = 1;

    while(i < m){
        if(t[len] == t[i]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0)
                len = lps[len - 1];
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

bool kmp(string s, string t){
    bool flag = false;
    ll n = s.size();
    ll m = t.size();

    ll lps[n + 1];
    tinhLPS(t,m,lps);

    ll i = 0,j = 0;
    while(i < n){
        if(s[i] == t[j]){
            i++;
            j++;
        }
        if(j == m){
            cout << i - j << endl;
            j = lps[j - 1];
            flag = true;
        }
        else if(s[i] != t[j] && i < n){
            if(j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return flag;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> s >> t;

    if(!kmp(s,t)){
        cout << -1;
    }

    return 0;
}
