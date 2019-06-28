#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string str;

int main()
{
    ios::sync_with_stdio(false);
    getline(cin,str);
    bool flag = false;
    for(ll i = 0 ;  i < str.size() ; i++){
        if(str[i] != '/'){
            flag = true;
            break;
        }
    }
    if(!flag){
        cout << '/';
        return 0;
    }

    for(ll i  = 0 ; i < str.size()-1; i++){
//        cout << i << " " << str[i] << " " << str[i + 1] << " " << str << endl;
        if(str[i] == '/'){
            if(str[i + 1] == '/'){
                str.erase(i,1);
                i--;
            }
        }
    }
    ll n = str.size();
    if(str[n-1] == '/')
        str.erase(n-1,1);
    cout << str;
    return 0;
}
