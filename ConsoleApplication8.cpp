#include <iostream>

using namespace std;

int main() 
{
	int n;
	cout << "add ra vared konid: ";
	cin >> n;
	for (int i = 1;; i++) 
	{
		if (n % i == 0) 
		{
			n /= i;
		}
		else 
		{
			break;
		}
	}

	if (n == 1) 
	{
		cout << "yes\n";
	}
	else 
	{
		cout << "no\n";
	}
	
	return 0;
}