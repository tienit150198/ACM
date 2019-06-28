#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

string str, str1;
string day[]  = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

ll getDate(ll month) {
    switch(month) {
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return 28;
    default:
        return 31;
    }
}

string t[1500];
ll num = 0;
int main() {
    //freopen("OUTPUT.OUT", "w", stdout);

    // init
    ll i = 1;

    ll d = 1;
    t[0] = day[1];
    num = 1;

    while(i < 1427) {
        ll tmp = getDate(i%12);
        t[num++] = day[(tmp + d)%7];
        d = (tmp + d) % 7;
        i++;

    }

    ios::sync_with_stdio(false);
    cin >> str >> str1;


    i = 0;
    ll year = 1900;
    bool f = false;
    while(i < num) {
        if(t[i] == str && t[i + 1] == str1) {
            f = true;
            break;
        }
//        cout << t[i] << endl;
        i++;
    }

    if(f) {
        cout <<"YES";
    } else
        cout << "NO";

    return 0;
}
