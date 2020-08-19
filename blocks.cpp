#include<iostream>
using namespace std;
int i = 5;
int main() {
	int j = 7;
	cout << i << "\n";
	{
		int i = 10, j = 11;
		cout << i << "\n";
		cout << ::i << "\n";
		cout << j << "\n";
	}
	cout << j << "\n";
	//j = 5; incorrect
	return 0;
}