#include <bits/stdc++.h>

using namespace std;

int slove(string str){
    int res = 0;
    string rr = "1";
    int n = str.size();
    while(str != rr){
        if(str[n-1] == '1'){
            n++;
            int i = n-1;
            while(i >= 0 && str[i] == '1'){
                i--;
            }
            if(i < 0){
                str = "0" + str;
                rr = "0" + rr;
            }
            str[i] = '1';
            for(int j = i+1 ; j < n ; j++)
                str[j] = '0';
        }
        else{
            str[n-1] = '\0';
            n--;
        }
        res++;
    }
    return res;
}

int main() {
    string str;
    cin >> str;

    cout << slove(str);

    return 0;
}
