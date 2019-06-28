
#include <iostream> 
using namespace std; 
  
// Program to print first n  
// tribonacci numbers Matrix  
// Multiplication function  
// for 3*3 matrix 
void multiply(int T[3][3], int M[3][3]) 
{ 
    int a, b, c, d, e, f, g, h, i; 
    a = T[0][0] * M[0][0] +  
        T[0][1] * M[1][0] +  
        T[0][2] * M[2][0]; 
    b = T[0][0] * M[0][1] +  
        T[0][1] * M[1][1] +  
        T[0][2] * M[2][1]; 
    c = T[0][0] * M[0][2] +  
        T[0][1] * M[1][2] +  
        T[0][2] * M[2][2]; 
    d = T[1][0] * M[0][0] +  
        T[1][1] * M[1][0] +  
        T[1][2] * M[2][0]; 
    e = T[1][0] * M[0][1] +  
        T[1][1] * M[1][1] +  
        T[1][2] * M[2][1]; 
    f = T[1][0] * M[0][2] +  
        T[1][1] * M[1][2] +  
        T[1][2] * M[2][2]; 
    g = T[2][0] * M[0][0] +  
        T[2][1] * M[1][0] +  
        T[2][2] * M[2][0]; 
    h = T[2][0] * M[0][1] +  
        T[2][1] * M[1][1] +  
        T[2][2] * M[2][1]; 
    i = T[2][0] * M[0][2] +  
        T[2][1] * M[1][2] +  
        T[2][2] * M[2][2]; 
    T[0][0] = a; 
    T[0][1] = b; 
    T[0][2] = c; 
    T[1][0] = d; 
    T[1][1] = e; 
    T[1][2] = f; 
    T[2][0] = g; 
    T[2][1] = h; 
    T[2][2] = i; 
} 
  
// Recursive function to raise  
// the matrix T to the power n 
void power(int T[3][3], int n) 
{ 
    // base condition. 
    if (n == 0 || n == 1) 
        return; 
    int M[3][3] = {{ 1, 1, 1 },  
                   { 1, 0, 0 },  
                   { 0, 1, 0 }}; 
  
    // recursively call to 
    // square the matrix 
    power(T, n / 2); 
  
    // calculating square  
    // of the matrix T 
    multiply(T, T); 
  
    // if n is odd multiply  
    // it one time with M 
    if (n % 2) 
        multiply(T, M); 
} 
int tribonacci(int n) 
{ 
    int T[3][3] = {{ 1, 1, 1 },  
                   { 1, 0, 0 }, 
                   { 0, 1, 0 }}; 
  
    // base condition 
    if (n == 0 || n == 1) 
        return 0; 
    else
        power(T, n - 2); 
  
    // T[0][0] contains the  
    // tribonacci number so 
    // return it 
    return T[0][0]; 
} 
  
// Driver Code 
int main() 
{ 
    int n = 10; 
    for (int i = 0; i < n; i++) 
        cout << tribonacci(i) << " "; 
    cout << endl; 
    return 0; 
} 
