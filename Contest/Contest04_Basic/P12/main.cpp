#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string res;
    cin >> res;

    string t = res;
    reverse(t.begin(),t.end());
    if(t == res){
        cout <<"YES";
    }
    else
        cout <<"NO";

    return 0;
}
