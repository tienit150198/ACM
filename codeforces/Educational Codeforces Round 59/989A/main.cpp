#include <bits/stdc++.h>
#define ll long long int
#define Max 200007

using namespace std;

string str;
string a[] = {"ABC","ACB","BCA","BAC","CBA","CAB"};

int main() {
    ios::sync_with_stdio(false);
    cin >> str;

    bool flag =false;
    for(ll i = 1 ; i < str.size() - 1; i++){
        string tmp = "";
        ll j = i - 1;
        while(j <= i + 1){
            tmp += str[j++];
        }
        j = 0;
        while(j < 6){
            if(a[j] == tmp){
                flag = true;
                break;
            }
            j++;
        }

        if(flag)
            break;
    }
    if(flag)
        cout << "Yes";
    else
        cout << "No";


    return 0;
}
