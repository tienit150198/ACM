#include <bits/stdc++.h>

using namespace std;
int a[10];
int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    sort(str.begin(), str.end());
    reverse(str.begin(), str.end());
    bool f = false;
    int _max = 0;
    for(int i = 0 ; i < n ; i++) {
        _max = max(_max, str[i] - '0');
        if(str[i] == '1' || str[i] == '0') {
            f = true;
        }
        if(str[i] >= '2') {
            for(int t = '2' ; t <= str[i] ; t++) {
                a[t - '0']++;
            }
        }
    }
    if(!f)
        cout << str;
    else {
        int t = _max-1;
        while(t >= 2){
            for(int i = 0 ; i < a[t] ; i++){
                cout << t;
            }
            for(int i = t-1 ; i > 2 ; i--){
                a[i] -= a[t];
            }
            t-=2;
            if(t == 1)
                t = 2;
        }
    }

    return 0;
}
