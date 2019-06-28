#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

string str;
ll n;
ll a[2];

ll change(char s){
    switch(s){
    case '^':
        return 0;
    case '>':
        return 1;
    case 'v':
        return 2;
    case '<':
        return 3;
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    getline(cin,str);
    str[1] = str[2];

    a[0] = change(str[0]);
    a[1] = change(str[1]);

    cin >> n;

    n %= 4;

    if(n%2 == 0){
        cout << "undefined";
        return 0;
    }


    if((a[0]+n)%4 == a[1])
        cout << "cw";
    else
        cout << "ccw";



    return 0;
}
