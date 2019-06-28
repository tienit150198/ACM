#include <bits/stdc++.h>
#define ll long long int
#define Max 1011
using namespace std;

ll a[Max][Max];
ll n;

void out(ll n){
    for(ll i = 0 ; i < n; i++){
            for(ll j = 0; j < n; j++)
                cout << setw(3) << a[i][j];

            cout << endl;
        }

    cout << endl << endl;
}

while(k <= m*n){
		for(i = p; i < cot; i++) /*Loop to access the first row of the array*/
			a[p][i] = k++;
		for(i = p+1; i < dong; i++) /*Loop tp access the last column of the array*/
			a[i][cot-1] = k++;
		if ( p != dong-1){
			for(i = cot-2; i >=p; i--) /*Loop to access the last row of the array*/
				a[dong-1][i] = k++;
		}
		if(p!=cot-1){
			for(i = dong-2; i > p; i--) /*Loop to access the first column of the array*/
				a[i][p] = k++;
		}
		p++;dong --; cot --;
	}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n;
    init();

    return 0;
}
