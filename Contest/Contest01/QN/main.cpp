#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,j=0;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);
    for (int i = 0; i <= n; i++) {
        if(a[i]==j*j)
            j++;
        else if(a[i]>j*j) {
            cout<<j*j;
            break;
        }
    }
    return 0;
}

