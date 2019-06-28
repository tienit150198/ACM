#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string text;
    char tmp;
    int flag = 1;
    cin >> tmp;
    if(tmp == 'R')
        flag = -1;

    cin >> text;
    for(ll i = 0 ; i < text.size(); i++){
        for(ll j = 0 ; j < str.size(); j++){
            if(text[i] == str[j])
                cout << str[j + flag];
        }
    }


    return 0;
}
