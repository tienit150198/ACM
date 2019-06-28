#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string str = "ueoaiy";
bool isCheck(char c){
    for(ll i = 0 ; i < str.size() ; i++)
        if(str[i] == c)
            return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    for(ll i = 0 ; i < s.size(); i++){
        if(isCheck(s[i]))
            s[i] -= 32;
    }

    cout << s;

    return 0;
}
