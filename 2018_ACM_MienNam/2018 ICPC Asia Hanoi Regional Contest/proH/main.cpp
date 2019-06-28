#include <bits/stdc++.h>
#define ll long long int
#define Max 100000011
using namespace std;
ll h,t, res = 0;
int main()
{
    ios::sync_with_stdio(false);
    while(cin >>h >> t){
        if(h == 0 && t == 0)
            break;
        res = 0;

        while(h > 0 || t > 0 && res <= Max){
            if(h%2 && t%2){
                if(h >= 2)
                    h -= 2;
                else
                    t++;
            }
            else{
                if(h >= 2){
                    h -= 2;
                }
                else if(t >= 2){
                    t -= 2;
                    h++;
                }
                else{
                    t++;
                }
            }
            res++;
        }
        if(res <= Max)
            cout << res << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
