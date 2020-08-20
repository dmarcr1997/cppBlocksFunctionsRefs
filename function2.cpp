#include<iostream>
using namespace std;

void PrintPassOrFail(int score, int passMark);

int main() {
	int score = 30, pass_mark = 30;
	PrintPassOrFail(score, pass_mark);

	return 0;
}

void PrintPassOrFail(int score, int mark) {
	if (score >= mark)
	{
		cout << "Pass - congratulations!\n";
	}
	else
	{
		cout << "Fail - better luck next time\n";
	}
}