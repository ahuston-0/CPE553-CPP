#include <iostream>
using namespace std;

extern void f(); //declaration that function f exists
//void f(); // function prototype (same)

//extern int y;  // undefined symbol
float x=1.5f; //definition: globals are binary zero
double pi = 3.141592653589793;
int main() {
	cout << x << '\n';
	cout << pi << '\n';
	f();
	cout << pi << '\n';
	//	cout << y << '\n';
}
