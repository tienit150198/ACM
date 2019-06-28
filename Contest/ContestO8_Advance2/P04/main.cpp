#include <bits/stdc++.h>
#define ll long long int
#define Max 100011
using namespace std;

ll n, k;
double a[Max];

bool isCheck(double x){
    ll t = 0;
    for(ll i = 0 ; i < n; i++){
        t += a[i]/x;
    }
    return (t >= k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> k;

    for(ll i = 0 ; i < n; i++)
        cin >> a[i];

    double l = 0, r = Max;
    double mid = (l + r) / 2;
    while(l != mid && r != mid){
    	if(isCheck(mid)){
    		l = mid;
		}
		else
			r = mid;
		
		mid = (l + r ) / 2;
	}
	
	printf("%.2f", floor(r*100)/100);


    return 0;
}
