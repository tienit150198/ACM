#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n, greater<int>());

    int ans = 1;
    int Sum = a[0];
    for(int i = 1 ; i < n && Sum < m; i++){
        Sum += a[i] - 1;
        ans++;
    }
    if(m == 0 || m == 1)
        cout << 0;
    else if(Sum >= m)
        cout << ans;
    else
        cout << -1;


    return 0;
}
