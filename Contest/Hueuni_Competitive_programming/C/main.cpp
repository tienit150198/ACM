#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

string test[Max];
map<char,string> f;

ll numtest = 0;
string str;



int main() {
    fast
    getline(cin,str);

    string str1;
    getline(cin,str1);

    string t = "";
    ll n = str1.size();
    for(ll i = 0 ; i < n ; i++){
        if(str1[i] == ' '){
            test[numtest] = t;
            t = "";
            numtest++;
            continue;
        }
        t += str1[i];
    }
    test[numtest++] = t;
    n = str.size();
    for(ll i = 0 ; i < numtest;  i++){
        if(f[test[i][0]] != ""){
            f[test[i][0]] += test[i];
        }else
            f[test[i][0]] = test[i];
    }
    string str;
    for(int i = 0 ; i < n ; i++){
     //   if(f[str[i]] != "")
            cout << f[str[i]] << " ";
    }


    return 0;
}
