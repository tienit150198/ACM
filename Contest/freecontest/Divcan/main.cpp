#include <iostream>
#include <math.h>
using namespace std;

struct point {
   int x, y;
};

float dis(point a, point b) {
   return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

bool isTriangle(float a, float b, float c) {
   return (  (a + b > c)
          && (a + c > b)
          && (b + c > a) );
}



int main() {

	
   	point a, b, c;
   	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
   	float ab = dis(a, b);
   	float ac = dis(a, c);
   	float bc = dis(b, c);
   	printf("%f %f %f \n", ab, ac, bc);
   	
   	if (isTriangle(ab, bc, ac)) {
    	float p = (ab + ac + bc)*1.0/2;
    	printf("%f\n", p);
        float area = sqrt(p*(p - ab)*(p - ac)*(p - bc));
        printf("%.3f", area);
   	}
   	else cout << -1;
   	
   	return 0;
}
