#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007

using namespace std;

char s[Max];

int main() {
//    freopen("in.INP","r",stdin);
    ios::sync_with_stdio(false);
    gets(s);

    ll i = strlen(s) - 1;
    ll k = 0;

    if(strlen(s) == 0){
        cout << 0;
        return 0;
    }

    ll ans = 0;
    while(i >= 0 && s[i] == ' '){
        ans++;
        i--;
    }

    while(k < i && i > 0 && s[k] == ' '){
        k++;
    }

    for(ll j = i-1 ; j >= k ; j--){
        if(s[j] == ' ' && s[j + 1] == ' '){
            ans += abs((i - j - 1)) + 1;
            i--;
        }
    }
    for(ll j = k-1; j >= 0 ; j--){
        ans += abs(i - j) + 1;
        i--;
    }

    cout << ans;

    return 0;
}

/*
Ví d
ụ
Input
Outputa
ab  c
3
xyz  abcd
ab  c
xyz  abcd

 xyz     abcd
 20
     a

  abcd           a
*/
