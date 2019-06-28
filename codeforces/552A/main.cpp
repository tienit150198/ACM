#include <bits/stdc++.h>
#define ll long long int
#define Max 1000007
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define x1 fldgjdflgjhrthrl
#define x2 fldgjdflgrtyrtyjl
#define y1 fldggfhfghjdflgjl
#define y2 ffgfldgjdflgjl
using namespace std;

ll i,n,m,x1,y1,x2,y2;

int main()
{
    fast
    ll ans = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		ans += (x2-x1+1)*(y2-y1+1);
	}
	cout << ans << endl;
	return 0;
}
