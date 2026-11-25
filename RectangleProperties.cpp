#include <iostream>

using namespace std;

//This program..

double getInput();
double calculate(double length, double width);
void displayResult(double perimeter, double area);

int main() {

	cout << "Enter rectangle's length and width: " << endl;
	
	double length;
	double width;

	cin >> length >> width;

	cout << "Length: " << length << endl << "Width: " << width << endl;

	double perimeter = 2 * (length + width);
	double area = length * width;

	cout << "Perimeter: " << perimeter << endl << "Area: " << area << endl;

	return 0;
}