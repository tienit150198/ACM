#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    string str;
    cin >> str;
    string str1 = str;
    reverse(str1.begin(), str1.end());
    cout << str<<str1;

    return 0;
}

