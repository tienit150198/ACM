#include <bits/stdc++.h>
#include <cstdio>
#define ll long long int
#define fo(i,a,n) for(i = 0 ; i < n ; i++)   cin >> a[i];
#define fo1(i,a,b) for(int i = a ; i < b ; i++)
#define out(i,a,n) for(i = 0; i < n ; i++) {cout << a[i] << " ";} cout << endl;
using namespace std;
#define MOD 5
inline ll isPow(ll n, ll k, ll p = MOD) {ll r = 1; for (; k; k >>= 1LL) {if (k & 1LL) r = r * n % p; n = n * n % p;} return r;}
void quickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}
unsigned int gcd (unsigned int n1, unsigned int n2) {
    return (n2 == 0) ? n1 : gcd (n2, n1 % n2);
}
bool isPrime(int a){
	if(a<2)
		return 0;
	int tmp = sqrt(a);
	for(int i = 2 ; i <= tmp ; i++)
		if(!(a%i))
			return 0;
	return 1;
}

bool isPrime(ll a){
    if(a < 2)
        return false;
    ll tmp = sqrt(a);
    for(ll i = 2 ; i <= tmp ; i++)
        if(!(a%i))
            return false;
    return true;
}

typedef struct a{
    ll w,v;
}a;

bool acompare(a A, a B){
    return A.w > B.w;
}

int main(){
	ios::sync_with_stdio(0);
    ll n,m;
    cin >> n >> m;
    ll j = 0;
    cin >> j;
    ll a[j];
    for(ll i = 0 ; i < j; i++)
        cin >> a[i];

    ll bd = 1;
    ll kt = m;
    ll ans = 0;
    for(ll i = 1 ; i <= j; i++){
        ll tmp= a[i-1];
        if(tmp >= bd && tmp <= kt){
            continue;
        }
        else{
            ll res = min(abs(tmp - bd),abs(tmp-kt));
            ans += res;
            if(tmp < bd){
                bd -= res;
                kt -= res;
            }
            else{
                bd += res;
                kt += res;
            }
        }
    }
    cout << ans;

	return 0;
}
