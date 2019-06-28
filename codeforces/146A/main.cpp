#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
string str;

bool isCheck(string str, ll _size){
    ll res = 0, res1 = 0;
    ll i = 0;
    bool flag = false;
    while(i < n){
        if(i < n/2)
            res += str[i] - 48;
        else
            res1 += str[i] - 48;
        if(str[i] != '4'){
            if(str[i] != '7')
                flag = true;
        }
        i++;
    }

    if(flag)
        return false;
    return res == res1;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> str;

    if(isCheck(str,n))
        cout << "YES";
    else
        cout <<"NO";

    return 0;
}
