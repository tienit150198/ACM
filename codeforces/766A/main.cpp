#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string str, str1;
    cin >> str >> str1;

    if(str == str1 ){
        cout << -1;
    }else{
        cout << max(str.size(), str1.size());
    }
    return 0;
}
