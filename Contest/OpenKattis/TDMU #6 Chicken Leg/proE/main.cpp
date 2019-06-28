#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[300][300];
ll row = 0, col = 0;

struct m
{
    ll val;
    ll x, y;
};
struct cmp
{
    bool operator() (m a, m b){return a.val > b.val;}
};

priority_queue < m, vector<m>, cmp > pq;

int main()
{
    ios::sync_with_stdio(false);

    freopen("in.inp", "r", stdin);

    string str;
    string str1[100];
    int i = 0;
    while(cin >> str)
    {
//        cout << str << endl;
//        str1[i++] = str;
        for(i = 0 ; i < str.length() ; i++){
            a[row][i] = str[i];
        }
        row++;
    }

    col = i;
    cout << row << " " << col << endl;
    for(i = 0 ; i < row ; i++){
        for(ll j = 0; j < col ; j++){
            if()
        }
//            cout << a[i][j] << " ";
//        cout << endl;
    }

    return 0;
}
