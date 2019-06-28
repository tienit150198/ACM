#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string str;
stack<char> s;

bool isCheck(char ch){
    if(ch == '{' || ch == '(' || ch == '[')
        return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> str;
    ll _size = str.size();
    for(ll i = 0 ; i < _size ; i++){
        if(isCheck(str[i])){
            s.push(str[i]);
        }
        else{
            // trường hợp dấu đóng ngoặc đứng đầu hoặc dấu đóng ngoặc đứng cuối mà không có dấu mở ngoặc ở trước
            if(s.size() <= 0){
                cout <<"no";
                return 0;
            }
            s.pop();//[[{]})

        }
    }

    if(s.size() != 0)
        cout <<"no";
    else
        cout << "yes";



    return 0;
}
