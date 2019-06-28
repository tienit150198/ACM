#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a = 1, b = 1 , c = 3;

    for(a = 1; a <= m/5 ; a++){
        for(b = 1 ; b <= m/3 ; b++ ){
            for(c = 3; c < n ; c += 3)
            if(a + b + c == n && 15*a + 9*b + c == 3*m){
                cout << a  << " " << b << " " << c;
                return 0;
            }

        }
    }

    cout << -1;
    return 0;
}
