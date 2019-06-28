#include <bits/stdc++.h>
using namespace std;

unsigned long long s,n,m;

unsigned int sum(unsigned long long x)
{
	unsigned int ss=0;
	while (x>0)
	{
		ss+=x%10; x/=10;
	}
	return ss;
}

//Prime factorization - ptich s.nguyen thanh thua so nguyen to
void primediv(int n)
{
	// consider the number of 2s that divide n 
    while (n%2 == 0) 
    { 
        n = n/2; 
        s+=2;
    }  
    // n must be odd at this point.  So we can skip one element  
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        // While i divides n, increase B[i] and divide n 
        while (n%i == 0) 
        { 
            n = n/i; 
            s+=sum(i);
        } 
    } 
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2) s+=sum(n); 	
}

bool prime (unsigned long long n)
{
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++) 
		if(n%i == 0) return false;
	return true;
}

int main() {	

	cin >>n;
	m=n; 
	while (true)
	{
		n=++m;
		s=0;
		primediv(n);
		if ( prime(n) ) continue;
		if ( s == sum(m) ) 
		{
			cout <<m; 
			exit(0);
		}
	}
	return 0;
}

