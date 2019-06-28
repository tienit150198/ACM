#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void computeLPSArray(string path, ll m, ll lps[]){
    lps[0] = 0;
    ll len = 0;
    ll i = 1;

    while(i < m){
        if(path[i] == path[len] ){
         //   cout << "i = len:" << " " << len << " " << i << endl;
            len++;
            lps[i] = len;
            i++;
        }
        else{   // path[i] != path[len]
            if(len != 0){
           //     cout << "len != 0: " << lps[len - 1] << " " << len << endl;
                len = lps[len - 1];
            }
            else{   // len == 0
            //    cout << "len == 0: " << lps[i] << " " << i << endl;
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(string path, string txt){
    ll m = path.size();
    ll n = txt.size();
    // j in Path, i in Txt
    ll i = 0, j = 0;
    ll lps[m];

    computeLPSArray(path,m,lps);

    while(i < n){
        if(path[j] == txt[i]){
            i++;
            j++;
        }
        if(j == m){
            cout << i - j + 1<<  " ";
            j = lps[j - 1];
        }
        else if(i < n && path[j] != txt[i]){
            if(j != 0)
                j = lps[j-1];
            else{
                i++;
            }
        }
    }
}

ll n;
m a[Max];
int main() {
    fast
    cin >> n;

    ll maxt = INT_MIN, maxd = INT_MIN;
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i].x >> a[i].y;
        a[i].total = a[i].x + a[i].y;

        maxt = max(maxt,a[i].x);
        maxd = max(maxd,a[i].y);
    }

    if(maxt > maxd){
        sort(a,a+n,cmp);
    }else
        sort(a,a+n,cmp1);

    for(ll i = 0 ; i < n ; i++){
        cout << a[i].total;
    }



    return 0;
}
/*
double pi = 8 * 100.0/13;
	cout << fixed << setprecision(6) << pi <<endl;
    làm tròn
*/
