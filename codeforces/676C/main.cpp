#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

/*ll a[Max], b[Max];
ll slove(string str, ll n, ll k){
    str = " " + str;
    ll ans = 0, dp = 1;
    for(ll i = 1 ; i <= n ; i++){
        a[i] = a[i - 1];
        b[i] = b[i - 1];
        if(str[i] == 'a')
            a[i]++;
        else    // str[i] == 'b'
            b[i]++;

        if(min(a[i],b[i]) <= k)
            ans = max(ans, a[i] + b[i]);
        else{   // min(a[i], b[i]) > k
            if(str[dp] == 'a')
                a[i]--;
            else
                b[i]--;
            dp++;
        }
    }
    return ans;
}*/

ll isCheck(string str, ll n, ll k, char t){
    ll i = 0, j = 0, cnt = 0, ans = 0;
    for(ll i = 0 ; i < n ; i++){
        if(str[i] == t)
            cnt++;
        if(cnt > k){
            while(cnt > k){
                if(str[j++] == t)
                    cnt--;
            }
        }
        ans = max(ans, i - j + 1);
    }
    return ans;
}

ll n, k;
string str;
int main()
{
    cin >> n >> k;
    cin >> str;

    //cout << slove(str,n,k);
    cout << max(isCheck(str,n,k,'a'), isCheck(str,n,k,'b'));

    return 0;
}
