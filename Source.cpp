#include <iostream>
#include <ctime>
using namespace std;
	//1.
	//double powerA3(double a) {
	//	//double res = a * a * a;
	//	return a * a * a;
	//}
	//int main() {
	//	srand(time(nullptr));
	//	for (int i = 1; i <= 5; i++) {
	//		double x = rand() % 11;
	//		double x3 = powerA3(x);
	//		cout << "x = " << x << " x^3=" << x3 << endl;
	//	}
	//}
    //2.
//double powerA2(double a) {	
//		return a * a;
//	}
//double powerA4(double a) {
//		return a * a * a * a;
//	}
//int main() {
//	srand(time(nullptr));
//	for (int i = 1; i <= 5; i++) {
//		double x = rand() % 11;
//		double x2 = powerA2(x);
//		double x4 = powerA4(x);
//		cout << " x = " << x << " x^2 = " << x2 << " x^4 = " << x4 << endl;
//	}
//}
//Proc3
//double aMean(double x, double y) {
//	return (x + y) / 2;
//  }
//double gMean(double x, double y) {
//	return sqrt(x * y);
//}
//int main() {
//	srand(time(nullptr));
//	for (int i = 1; i <= 10; i++) {
//		double x1 = rand() % 100 / 10.0;
//		double y1 = rand() % 100 / 10.0;
//		double am = aMean(x1, y1);
//		double gm = gMean(x1, y1);
//		cout << x1 << " " << y1 << " am = " << am << " gm = " << gm << endl;
//		}
//}
//Proc4
double trianglep(double a) {
	return (3 * a);
 }
double triangles(double a) {
	return (a * a * sqrt(3) / 4);
}
int main() {
	double  a;
	for (int i = 1; i <= 3; i++) {
		cin >> a;
		double p = trianglep(a);
		double s = triangles(a);
		cout << " p = " << " " << p << " s = " << " " << s << endl;
	}
}