#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
string str;

int main() {
    ios::sync_with_stdio(false);
    cin >> str;
    cin >> n;

    if(str.size() < n){
        cout << "impossible";
        return 0;
    }
    set<char> s;
    //fwgfrwgkuwghfiruhewgirueguhergiqrbvgrgf
    for(ll i = 0 ; i < str.size() ; i++){
        s.insert(str[i]);
    }
    cout << max(n - s.size(),0*1LL);

    return 0;
}
