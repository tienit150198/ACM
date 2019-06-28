#include <bits/stdc++.h>
#define ll long long int
#define fi fist
#define se second
#define pb push_back
#define mp make_pair
#define is insert
#define _auto int main()
#define Acepted return 0;
#define ipair pair<ll,ll>
#define spair pair<string,string>
#define debug(a,st,en) {for(ll i = st; i <= en ; i++) {cout << a[i] << " ";} << cout << endl;}
#define debuga(a) cout << (#a) << " = " << a << endl;
#define FOR(i,a,b) for(ll i = a; i <= b ; i++)
#define FORD(i,a,b) for(ll i = a; i >= b; i--)
#define EACH(it,a) for(_typeof(a.begin()) it = a.begin() ; it != a.end() ; ++it)
#define EPS 0.0000000001
#define SQ(a) a*a
#define SUM(a) (a*(a+1))/2
#define Max 200007
#define limit 1000007
#define MOD 1000000007
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;


bool isCheck(string str) {
    stack<char> st;

    FOR(i,0,str.size()-1) {
        if(str[i] == '(')
            st.push(str[i]);
        else {
            if(st.size()) {
                st.pop();
                if(st.size() == 0 && i < str.size() - 1)
                    return false;
            } else
                return false;
        }
    }

    return (st.size() == 0);
}

ll n;
string str;

_auto {
    fast
//    freopen("abc.in", "r", stdin);
    cin >> n;
    cin >> str;

    ll open = 0, close = 0;
    FOR(i,0,str.size()-1) {
        if(str[i] == '(')
            open++;
        if(str[i] == ')')
            close++;
    }

    FOR(i,0,str.size()-1) {
        if(str[i] == '?') {
            if(open < str.size()/2){
                str[i] = '(';
                open++;
            }
            else
                str[i] = ')';
        }
    }

//    cout << str << endl;
    if(isCheck(str)) {
        cout << str;
    } else {
        cout << ":(";
    }

    Acepted
}
