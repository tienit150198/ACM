#include <bits/stdc++.h>
#define ll long long int
#define Max 1007

using namespace std;

ll t, n;
string str;

bool isCheck(char a, char b){
    if((char)(a + 1) == (char)(b - 1) || (char)(b + 1) == (char)(a - 1))
        return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> t;

    while(t--){
        cin >> n;
        cin >> str;

        ll i = 0, j = n - 1;
        n = n / 2;
        bool flag = true;
        while(i <= j){
            if(str[i] != str[j] && !isCheck(str[i], str[j])){
                flag = false;
                break;
            }
            i++, j--;
        }
        if(flag)
            cout <<"YES" << endl;
        else
            cout <<"NO" << endl;
    }


    return 0;
}
