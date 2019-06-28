#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n, k;
string str;

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;
    cin >> str;
    ll g = 0, t = 0;
    for(ll i = 0 ; i < n ; i++){
        if(str[i] == 'G')
            g = i;
        if(str[i] == 'T')
            t = i;
    }

    if(g > t)
        swap(g,t);

    bool flag = true;
    while(g < t){
        g += k;
        if(str[g] == '#'){
            flag = false;
            break;
        }
    }
    if(g == t && flag)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}
