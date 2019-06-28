#include <bits/stdc++.h>
#define ll long long int
#define Max 10000007
using namespace std;

string str;

bool isCheck(string str){
    stack<char> s;
    ll n = str.size();
    for(ll i = 0 ; i < n ; i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
            s.push(str[i]);
        else{
            if(s.size() > 0){
                if(s.top() == '[' || s.top() == '{' || s.top() == '(')
                    s.pop();
                else
                    return false;
            }else
                return false;
        }
    }

    if(s.size() == 0)
        return true;
    return false;
}

int main()
{
    cin >> str;

    if(str.size() % 2 == 1){
        cout << "no";
        return 0;
    }

    if(isCheck(str)){
        cout << "yes";
    }else
        cout << "no";




    return 0;
}
