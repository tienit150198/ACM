#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define EACH(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)

#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) { cout << #a << " = "; FOR(_,1,n) cout << a[_] << ' '; cout << endl; }
#define PR0(a,n) { cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl; }

#define sqr(x) ((x) * (x))

#define ll long long int
#define MOD 1000000007
#define MN 100005

using namespace std;
void checkDefine();

class Solution {
	public:
		vector<vector<int> > threesum(vector<int> num){
			vector<vector<int> > ans;
			if(num.size() < 3) return ans;
			sort(num.begin(), num.end());
			
			FOR(i, 0, num.size() - 3){
				if(i && num[i] == num[i-1]) continue;
				int a = i + 1, b = num.size() - 1;
				while(a < b){
					if(a > i + 1 && num[a] == num[a-1]){
						a++; continue;
					}
					if(b < num.size() - 1 && num[b] == num[b+1]){
						b--; continue;
					}
					
					int sum2 = num[a] + num[b];
					if(sum2 == -num[i]){
						int sol[3] = {num[i], num[a], num[b]};
						ans.push_back(vector<int>(sol, sol + 3));
						a++; b--;
					}
					else if(sum2 < -num[i]){
						a++;
					}
					else if(sum2 > num[i]){
						b--;
					}
				}
			}
			return ans;
		}
};

int n;
vector<int> num;
int x;

/*
6
1 -2 1 -2 3 -4
res: 2
n: 1000
*/

int main() {
	cin >> n;
	FOR(i, 0, n - 1){
		cin >> x;
		num.push_back(x);
	}		
	Solution s;
	vector<vector<int> > res = s.threesum(num);
	if(res.size() == 0){
		cout << "no"; return 0;
	}
	cout << "yes" << endl;
	EACH(it, res){
		vector<int> temp = *it;
		sort(temp.begin(), temp.end());
		FOR(i, 0, temp.size() - 1){
			cout << temp[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

void checkDefine(){
	ll n, a[MN];
	map<ll, ll> m;
	cin >> n;
	FOR(i, 0, n - 1) {
		cin >> a[i];
		m[a[i]]++;
	}

	string s; cin >> s;
	DEBUG(s);
	PR0(a, n);
	DEBUG("------------");
	EACH(it, m){
		cout << it->first << " " << it->second << endl;
	}
}



