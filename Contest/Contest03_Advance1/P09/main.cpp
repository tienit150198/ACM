#include <bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define Max 1511
#define ESP 0.0000000001
using namespace std;

struct t{
    ll x, y;
    ul kc;
    bool vst;

};

bool operator !=(t a, t b){
    if(a.x != b.x && a.y != b.y)
        return true;
    return false;
}

ll n;
t a[Max];

ul tinhKc(t m, t m1){
    long double tmp = (m.x - m1.x) * (m.x - m1.x);
    long double tmp1 = (m.y - m1.y) * (m.y - m1.y);
    return (tmp + tmp1);
}
//
//bool isCheck(t a, t b, t c){
//	if(a.kc + b.kc - c.kc > ESP && a.kc - b.kc + c.kc > ESP  && b.kc + c.kc -a.kc  > ESP )
//		return true;
//
//	return false;
//
//}

bool cmp(t a, t b){
    return a.kc > b.kc;
}

bool isCheck(t a, t b, t c){
    return (a.kc + b.kc == c.kc || a.kc + c.kc == b.kc || b.kc + c.kc == a.kc);
}

bool isSearch(t u, t v, ll i, ll j, bool vst){
    ll l = 0, r = n-1;
    ll mid1 = (l + l + r) / 3;
    ll mid2 = (l + r + r) / 3;
    while(l != mid1 && r != mid2 && mid1 != mid2){

        if(isCheck(u,v,a[mid1]) && mid1 != i && mid1 != j){
            if(!u.vst || !v.vst || a[mid1].vst){
                u.vst = true;
                v.vst = true;
                a[mid1].vst = true;
                return true;
            }
            l = mid1;
        }

        if(isCheck(u,v,a[mid2]) && mid2 != i && mid2 != j){
            if(!u.vst || !v.vst || a[mid2].vst){
                u.vst = true;
                v.vst = true;
                a[mid2].vst = true;
                return true;
            }
            r = mid2;
        }
        if(vst)
            l = mid1 + 1;
        else
            r = mid2 - 1;

        mid1 = (l + l + r) / 3;
        mid2 = (l + r + r) / 3;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i = 0 ; i  < n; i++){
        cin >> a[i].x >> a[i].y;
        a[i].vst = false;
    }

    for(ll i = 0 ; i < n - 1 ; i++){
        a[i].kc = tinhKc(a[i],a[i+1]);
    }
    a[n-1].kc = tinhKc(a[n-1], a[0]);

    sort(a,a+n,cmp);

    ll res = 0;
    for(ll i = 0 ; i < n - 2; i++){
    	for(ll j = i+1 ; j < n - 1 ; j++){
            if(isSearch(a[i], a[j], i, j,false)){
                res++;
            }
            if(isSearch(a[i],a[j],i,j,true))
                res++;
    	}
	}// CHUA AC

	cout << res;

    return 0;
}
