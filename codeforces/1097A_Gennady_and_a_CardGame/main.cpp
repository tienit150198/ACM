#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

string str;

int main()
{
    ios::sync_with_stdio(false);
    cin >> str;
    int i = 5;
    bool flag = false;
    while(i--){
        string tmp;
        cin >> tmp;
        if(tmp[0] == str[0] || tmp[1] == str[1])
            flag = true;
    }
    if(flag)
        cout <<"YES";
    else
        cout << "NO";

    return 0;
}
