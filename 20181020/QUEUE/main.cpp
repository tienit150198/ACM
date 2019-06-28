#include <bits/stdc++.h>
#define ll long long int
#define Max 100007
using namespace std;

ll n;
ll a[Max];

void quickSort(ll a[], ll l, ll r){
    if(l <= r){
        ll li = l, ri = r, mid = a[(li+ri)/2];
        while(li < ri){
            while(a[li] < mid)
                li++;
            while(a[ri] > mid)
                ri--;
            if(li <= ri){
                if(a[li] != a[ri])
                    cout << li+1 << " " << ri+1 << endl;
                swap(a[li],a[ri]);
                li++;
                ri--;
            }
        }
        if(l < ri)
            quickSort(a,l,ri);
        if(li < r)
            quickSort(a,li,r);
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(ll i =0 ; i < n; i++){
        cin >> a[i];
    }

    quickSort(a,0,n-1);

    return 0;
}
