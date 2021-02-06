// Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Rectangle
{
	int length;
	int width;
};

struct Triangle
{
	int height;
	int base;
};


int main()
{
    cout << "Structure Rectangle!\n";
	
	Rectangle rectangle;
	rectangle.length = 5;
	rectangle.width = 5;
	
	cout << "Rectangle Length:" << rectangle.length << endl;
	cout << "Rectangle Width:" << rectangle.width << endl;

	cout << "Area of the rectangle:" << rectangle.length * rectangle.width << endl;

	Triangle triangle;
	triangle.base = 4;
	triangle.height = 5;
	cout << "Triangle Areas is: " << (.5 * triangle.base) * triangle.height << endl;
}
