#include <bits/stdc++.h>
#define ll long long int
#define MOD 5
using namespace std;
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
int main(){
    /*
    Cho N đồng xu và giá tiền của mỗi đồng (V0,V1,...,VN−1 ), và số S.
    Tìm số đồng xu nhỏ nhất để tổng giá trị của chúng bằng S (số lượng đồng xu không giới hạn).
    */
    ll n, s;
    cin >> n >> s;
    ll v[n];
    ll Min[s];
    ll truyvet[s][s];
    ll _max = 0;
    for(ll i = 0 ; i < n; i++){
        cin >> v[i];
        _max += v[i];
    }
    for(ll i = 0 ; i <= s; i++){
         Min[i] = _max;
    }

    ll k = 0;
    Min[0] = 0;
    for(ll i = 1 ; i <= s ; i++){
        for(ll j = 0 ; j < n ; j++){
            if(v[j] <= i && Min[i - v[j]] + 1 < Min[i]){
                Min[i] = Min[i - v[j]] + 1;
                truyvet[i]= i - v[j];
            }
        }
    }

    for(ll i = 1 ; i <= s ; i++)
        cout << i << "  "<< Min[i] << endl;

    for(ll i = 1 ; i <= s ; i++)
        cout << i << "  " << truyvet[i] << endl;


	return 0;
}
