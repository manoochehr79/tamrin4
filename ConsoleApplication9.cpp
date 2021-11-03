#include <iostream>
using namespace std;

int main() {

	int a, b, a1, a2, temp, temp1, kmm;
	cout << "add aval ra vared konid: ";
	cin >> a;
	cout << "add dovom ra vared konid: ";
	cin >> b;
	a1 = a;
	a2 = b;

	while (true) 
	{
		if (b == 0) 
			break;
		temp = a % b;
		a = b;
		b = temp;
	}

	kmm = (a1 * a2) / a;
	cout << "KMM :" << kmm <<"\n";
	
	while (true) 
	{
		if (b == 0) 
			break;
		temp1 = a % b;
		a = b;
		b = temp1;
	}
	cout << "BMM :" << a << "\n";

	return 0;
}