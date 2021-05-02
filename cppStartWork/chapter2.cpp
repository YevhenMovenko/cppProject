#include <iostream>
using namespace std;

//////Pointers/////////////
//int main() {
//
//	int x = 10;
//	cout << &x << endl;
//	int* ptr = &x;
//	cout << ptr << endl;
//	*ptr = 5;
//	void* ptr1 = NULL;
//	cout << ptr1 << endl;
//	int y = *ptr;
//	cout << y << endl;
//	return 0;
//}

/////////Referens/////////////

//int main() {
//	//Referent
//	int x = 10;
//
//	//Referens
//	int& ref = x;
//
//	cout << "&x1 = " << &x << endl;
//	cout << "x1 = " << x << endl;
//	cout << "&ref1 = " << &ref << endl;
//	cout << "ref1 = " << ref << endl;
//
//	int y = 20;
//	int& ref_y = y;
//	ref = y;
//	cout << "&x2 = " << &x << endl;
//	cout << "x2 = " << x << endl;
//	cout << "&ref2 = " << &ref << endl;
//	cout << "ref2 = " << ref << endl;
//	cout << "y2 = " << y << endl;
//	cout << "&ref_y2 = " << &y << endl;
//	return 0;
//}

void Saw(int* x, int* y) {
	int *temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 5, b = 3;

	cout << 'a = ' << a << endl;
	cout << 'b = ' << b << endl;
    
	Saw(&a, &b);

	cout << "Saw a = " << a << endl;
	cout << "Saw b = " << b << endl;

	return 0;
}