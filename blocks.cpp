#include<iostream>
using namespace std;

int main() {
	int i;
	i = 5;
	{
		int j;
		i = 10;
		j = 10;
	}
	//j = 5; incorrect
}