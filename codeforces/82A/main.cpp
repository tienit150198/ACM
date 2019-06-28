#include <bits/stdc++.h>
#define ll long long int
#define Max 100007

using namespace std;

ll n;
string str[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
int main() {
	cin >> n;
	//1 * 5 + 2 * 5 + 4 * 5 + 8 * 5
	int id = 0;
	ll s = 0;
	ll i = 0;
	ll id1 = -1;
	while(s < n){
		id = (ll)pow(2,i);
		s += 5 * id;
		if(s > n) break;
		if(s == n) id1 = id;
		i++;
	}
	if(id1 == -1){
		if(id == 1){
			cout << str[n-1]; return 0;
		}
		ll temp = s - id * 5;
		//cout << temp << endl;
		cout << str[((n-temp) / id) % 5];
	}
	else {
		cout << str[4];
	}
    return 0;
}
