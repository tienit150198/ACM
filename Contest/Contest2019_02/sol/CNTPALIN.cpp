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
#define foru(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)


using namespace std;
void checkDefine();

typedef long long int64;

int b[20];
int64 c[20];

int64 giatri(int64 a,int cs){
    int k[20],dem=0;
    int64 a1=a;
    if (a1==0){
        dem=1;
        k[1]=0;
    }

    while (a1>0){
        k[++dem]=a1%10;
        a1/=10;
    }

    int64 ans=0;
    foru(i,1,cs) ans=ans*10+k[dem-i+1];
    return ans;
}

int64 dem(int64 a){
    int64 ans=0;

    int64 a1=a;
    int scs=0;

    if (a1==0) scs=1;

    while (a1>0){
        b[++scs]=a1%10;
        a1/=10;
    }

    //cout<<scs<<" abc "<<endl;

    bool kt=true;
    int t=0;
    ford(i,scs/2,1){
        if (b[i]>b[scs-i+1]) {
            kt=true;
            break;
        }
        if (b[i]<b[scs-i+1]){
            kt=false;
            break;
        }
    }

    if (scs%2){
        if ((scs/2)>0)ans=c[scs/2]-1;
        ans+=giatri(a,scs/2+1)+1;
        if (!kt) ans--;
    }
    else {
        ans=giatri(a,scs/2)+c[scs/2];
        if (!kt) ans--;
    }

    return ans;
}

int main()
{
    freopen("09.in", "r", stdin);
	freopen("09.ans", "w", stdout);
	
    ios::sync_with_stdio(0);

    c[1]=10;
    foru(i,2,12) c[i]=c[i-1]*10;

    int T;
    cin>>T;
    while (T--){
        int64 l,r;
        cin>>l>>r;
        if (l>r) swap(l,r);
        cout<<dem(r)-dem(l-1);
        if(T > 0) cout << endl;
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




