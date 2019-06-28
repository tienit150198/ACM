#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

ll n;
ll A = Max,B = Max,C = Max,AB = Max,AC = Max,ABC = Max,BC = Max;

int main() {
    fast
    cin >> n;

    for(ll i = 0 ; i < n ; i++) {
        string str;
        ll c;
        cin >> c >> str;

        sort(str.begin(), str.end());

        if(str.length() == 3) {
            ABC = min(ABC,c);
        } else if (str.length() == 2) {
            if(str[0] == 'A' && str[1] == 'B')
                AB = min(AB,c);
            else if(str[0] == 'A' && str[1] == 'C')
                AC = min(AC,c);
            else if(str[0] == 'B' && str[1] == 'C')
                BC = min(BC,c);
        } else {
            if(str[0] == 'A')
                A = min(A,c);
            else if(str[0] == 'B')
                B = min(B,c);
            else
                C = min(C,c);
        }
    }

    ll ans = A+B+C;
    ans = min(ans,A+BC);
    ans = min(ans,B+AC);
    ans = min(ans,C+AB);
    ans = min(ans,ABC);
    ans = min(ans,AB+BC);
    ans = min(ans,AC+AB);
    ans = min(ans,AC+BC);

    if(ans >= Max) {
        cout << -1;
    } else
        cout << ans;


    return 0;
}
