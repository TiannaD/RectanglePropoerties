#include <iostream>

using namespace std;

//This program..

void getLengthWidth(double& length, double& width);
double calcPerimeter(double length, double width);
double calcArea(double length, double width);
void displayProperties(double perimeter, double area);

int main() {

	double length;
	double width;

	getLengthWidth(length, width);
	calcPerimeter(length, width);
	calcArea(length, width);
	displayProperties((calcPerimeter)(length,width), (calcArea)(length, width));

	return 0;
}

void getLengthWidth(double& length, double& width) {

	cout << "Enter the length and width of the rectangle: " << endl;
	cin >> length >> width;
}

double calcPerimeter(double length, double width) {

	double perimeter = 2 * (length + width);
	return perimeter;
}

double calcArea(double length, double width) {

	double area = length * width;
	return area;
}

void displayProperties(double perimeter, double area) {

	cout << "Perimeter: " << perimeter << endl << "Area: " << area << endl;
}