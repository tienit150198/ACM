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

bool isSquare(ll a){
    ll tmp = sqrt(a);
    return tmp*tmp == a;
}

ll dx[] = {-1,-1,-1,0,0,0,1,1,1};
ll dy[] = {-1,0,1,-1,0,1,-1,0,1};
ll a[100][100];
bool b[100][100];
ll n, m;
ll ans = 0;
bool isCheck(ll i, ll j){
    if(i >= 0 && j >= 0 && i < n && j < m && a[i][j])
        return true;
    return false;
}

ll process(){
    for(ll i = 0 ; i < n; i++){
        for(ll j = 0 ; j < m; j++){
            if(isCheck(i,j)){
                if(!b[i][j]){
                    b[i][j] = true;
                    bool flag = false;
                    for(ll t = 0 ; t < 9; t++){
                        if(isCheck(i+dx[t],j+dy[t]) && !b[i+dx[t]][j+dy[t]])
                            flag = true;
                            break;
                    }

                    if(flag) ans++;
                }
                for(ll t = 0 ; t < 9; t++){
                    if(isCheck(i+dx[t],j+dy[t]) && !b[i+dx[t]][j+dy[t]])
                        b[i+dx[t]][j+dy[t]] = true;
                }
            }
        }
    }
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> n >> m;
    char tmp;

    for(ll i = 0 ; i < 100; i++){
        for(ll j = 0 ; j < 100; j++){
            a[i][j] = 0;
            b[i][j] = false;
        }
    }

    for(ll i = 0 ; i < n; i++){
        for(ll j = 0 ; j < m; j++){
            cin >> tmp;
            if(tmp == 'W')
                a[i][j] = 1;
        }
    }


    process();

    cout << ans;

  //  system("PAUSE");

	return 0;
}
