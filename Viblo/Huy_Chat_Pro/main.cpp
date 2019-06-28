#include <bits/stdc++.h>

using namespace std;


int main() {
   // freopen("test.in","r",stdin);
    int numberPeople = 0;
    int ans = 0;

    string str;

    while(getline(cin,str)) {
        if(str[0] == '+' || str[0] == '-') {
            if(str[0] == '+') {
                numberPeople++;
            } else
                numberPeople--;
        } else {
            int n = str.size();
            int i = 0;
            for(i = 0 ; i < n ; i++){
                if(str[i] == ':')
                    break;
            }
            ans = ans + (n - i) * numberPeople;
        }
    }

    cout << ans << endl;

    return 0;
}
