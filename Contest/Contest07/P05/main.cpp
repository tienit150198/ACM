#include <bits/stdc++.h>
#define ll long long int
#define Max 100011
using namespace std;
ll n;
ll a[Max], b[Max], f[Max];
int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    for(ll i =  1;  i <= n; i++){
        cin >> b[i];
        
    }
    
    a[1] = b[1];
    f[1] = a[1];
    for(int i = 2 ; i <= n; i++ ){
    	
    	a[i] = b[i] * i - f[i-1];
    	f[i] = f[i - 1] + a[i];
	}

    for(ll i = 1 ; i <= n; i++){
        cout << a[i] << " ";
    }


    return 0;
}
