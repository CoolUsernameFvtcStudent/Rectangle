#include <iostream>
#include <conio.h>

using namespace std;

float GetLengthFromUser(float o)
{
	cout << "Enter a number\n";
	cin >> o;
	return o;
}

float GetWidthFromUser(float o)
{
	cout << "Enter a number\n";
	cin >> o;
	return o;
}

float CalculateArea(float L, float W)
{
	return L * W;
}

float DisplayArea(float Total)
{
	cout << "Your total is\n" << Total;
	return 0;
}

int main()
{
	DisplayArea(CalculateArea(GetLengthFromUser(0.00f), GetWidthFromUser(0.00f)));
	(void)_getch();
	return 0;
}