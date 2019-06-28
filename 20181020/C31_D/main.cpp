#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll isAliquote(ll a){
    if(a == 1)
        return 1;
    ll count = 2;
    ll tmp = sqrt(a);
    for(ll i = 2 ; i <= tmp ; i++){
        if(!(a%i)){
            count++;
            if(a/i != i)
                count++;
        }
    }
    return count;
}

int main()
{
    ll a, b;
    cin >> a >> b;

    ll Min = a, Cmin = isAliquote(a), Count = 1;

    for(ll i = a + 1; i <= b ; i++){
        ll tmp = isAliquote(i);

        if(tmp > Cmin){
            Min = i;
            Cmin = tmp;
            Count = 1;
        }
        else if(tmp == Cmin){
            if(i < Min)
                Min = i;

            Count++;
        }
    }

    cout << Min << " " << Cmin << " " << Count;
    return 0;
}
