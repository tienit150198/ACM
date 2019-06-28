#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
string s, s1;
vector<ll> a, b;

int main() {
    fast
    cin >> n >> s >> s1;

    for(ll i = 0 ; i < n ; i++){
        if(s[i] == '0' && s1[i] == '1'){
            a.push_back(i+1);
        }else if(s[i] == '1' && s1[i] == '0')
            b.push_back(i+1);
    }

    if(a.size() == 0 && b.size() == 0){
        cout << 0;
        return 0;
    }

    ll sizeA = a.size(), sizeB = b.size();
    ll ans = sizeA + sizeB;
    ll i = 0, j = 0;
    while(i < sizeA && j < sizeB){
        if(abs(a[i] - b[j]) <= 1){
            ans--;
            i++, j++;
        }
        else{
            if(a[i] < b[j])
                i++;
            else
                j++;
        }
    }

    cout << ans;


    return 0;
}
