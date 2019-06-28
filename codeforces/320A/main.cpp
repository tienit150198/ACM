#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    string str = "";
    while(n > 0){
        str += n%10 + '0';
        n /= 10;
    }
    ll i = 0;
    reverse(str.begin(), str.end());
    int ok = 0;
    while(i < str.size()){
        if(str[i] == '1'){
            ok = 1;
        }
        else if(str[i] == '4' && ok >= 1){
            if(ok == 1)
                ok++;
            else if(ok == 2)
                ok = 0;
        }
        else{
            ok = 10;
            break;
        }
        i++;
    }

    if(ok == 10)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
