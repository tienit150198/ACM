/*#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,a,b,i,x,y,r,d[179];
int main() {
    for(cin>>n>>a>>b; i<n; i++)
        cin>>d[i];
    for(i=0; i<n/2; i++) {
        x=d[i];
        y=d[n-1-i];
        if(x!=y&&x<2&&y<2)
            return cout<<-1,0;
        if(x==0&&y==2||x==2&&y==0)
            r+=a;
        else if(x==1&&y==2||x==2&&y==1)
            r+=b;
        else if(x==2&&y==2)
            r+=2*min(a,b);
    }
    n%2&&d[n/2]==2?r+=min(a,b):0;
    cout<<r;
}*/

#include <bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int _gcd(int a, int b){return (b ? _gcd(b,a%b) : a);};

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", a*b / _gcd(a,b));


    return 0;
}
