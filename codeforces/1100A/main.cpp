#include <bits/stdc++.h>
using namespace std;
int n,k,i,x,y,b,m,a[179];
int main() {
    for(cin>>n>>k; i<n; i++)
        cin>>a[i];
    for(b=0; b<k; b++) {
        for(x=y=i=0; i<n; i++)
            if((i-b+k)%k)
                a[i]>0?x++:y++;
        m=max(m,abs(x-y));
    }
    cout<<m;
}
