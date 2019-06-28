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

// tim duong tron chua tat ca cac diem O(n)
typedef pair <double, double> point;
typedef pair <point, double> circle;
point operator+(point a, point b){
	return point(a.first + b.first, a.second + b.second);
}
point operator-(point a, point b){
	return point(a.first - b.first, a.second - b.second);
}
point operator/(point a, double x){
	return point(a.first / x, a.second / x);
}
double abs(point a){
	return sqrt(a.first * a.first + a.second * a.second);
}

point center_from(double bx, double by, double cx, double cy){
	double B = bx * bx + by * by;
	double C = cx * cx + cy * cy;
	double D = bx * cy - by * cx;
	
	return point ((cy * B - by * C) / (2 * D), (bx * C - cx * B) / (2 * D) );
}
circle circle_from(point A, point B, point C) {
	point I = center_from(B.first - A.first, B.second - A.second, C.first - A.first, C.second - A.second);
 	return circle(I + A, abs(I));
}
const int N = 100005;
int n, x[N], y[N];
point a[N];

circle f(int n, vector<point> T){
	if(T.size() == 3 || n == 0){
		if(T.size() == 0){
			return circle(point(0,0), -1);
		}
		if(T.size() == 1){
			return circle(T[0], 0);
		}
		if(T.size() == 2){
		 	return circle((T[0]+T[1])/2, abs(T[0]-T[1])/2);
		}
		return circle_from(T[0], T[1], T[2]);
	}
	random_shuffle(a+1, a+n+1);
 	circle Result = f(0, T);
 	
	 for (int i = 1; i <= n; i++){
 		if (abs(Result.first - a[i]) > Result.second + 1e-9){
 			T.push_back(a[i]);
 			Result = f(i-1, T);
 			T.pop_back();
 		}
	}
 	
 	return Result;
}

int main() {
	scanf("%d", &n);
 	for (int i = 1; i <= n; i++) {
 		cin >> x[i] >> y[i];
 		a[i] = point(x[i], y[i]);
 	}

 	circle C = f(n, vector <point>());
 	(cout << fixed).precision(2);
 	cout << C.first.first << " " << C.first.second << endl;
 	cout << 2*C.second << endl;
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



