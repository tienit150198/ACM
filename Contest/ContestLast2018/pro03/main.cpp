#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string str, str1;
map<char,ll> t, t1;
bool isCheck(char ch){
    if(ch >= 'A' && ch <= 'Z')
        return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> str >> str1;
    if(str.length() != str1.length()){
        cout << "Not Anagrams";
        return 0;
    }
    for(ll i = 0 ; i < str.length() ; i++){
        if(isCheck(str[i])){
            str[i] = str[i] + 32;
        }
        if(isCheck(str1[i])){
            str1[i] = str1[i] + 32;
        }
        t[str[i]]++;
        t1[str1[i]]++;
    }

    for(ll i = 'a' ; i < 'a' + 26; i++){
        if(t[i] != t1[i]){
            cout << "Not Anagrams";
            return 0;
        }
    }
    cout << "Anagrams";
    return 0;
}
