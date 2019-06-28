#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

string str;

int main() {
    fast
    cin >> str;

    string str1 = str;
    reverse(str1.begin(), str1.end());
    if(str == str1){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}
