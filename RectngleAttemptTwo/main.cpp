#include <iostream>
#include <conio.h>

using namespace std;

float GetLengthFromUser()
{
	cout << "Enter a Length\n";
	float o;
	cin >> o;
	return o;
}

float GetWidthFromUser()
{
	cout << "Enter a Width\n";
	float o;
	cin >> o;
	return o;
}

float CalculateArea(float L, float W)
{
	return L * W;
}

void DisplayArea(float Total)
{
	cout << "Your total area is:\n" << Total;
}

int main()
{
	DisplayArea(CalculateArea(GetLengthFromUser(), GetWidthFromUser()));
	(void)_getch();
	return 0;
}