#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll q,n;
string str;

int main()
{
    ios::sync_with_stdio(false);
    cin >> q;
    while(q--){
        cin >> n;
        cin >> str;

        if(n > 2){
            cout << "YES" << endl << 2 << endl << str[0] << " ";
            for(ll i = 1 ; i < n ; i++)
                cout << str[i];
        }else{
            if(str[0] >= str[1]){
                cout << "NO";
            }else{
                cout << "YES" << endl << 2 << endl << str[0] << " " << str[1];
            }
        }

        cout << endl;
    }


    return 0;
}
