// Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Rectangle
{
	int length =4;
	int width =8;
};

struct Triangle
{
	int side;
	int height;
};


int main()
{
    cout << "Structure Rectangle!\n";
	Rectangle rectangle;
	
	cout << "Rectangle Length:" << rectangle.length << endl;
	cout << "Rectangle Width:" << rectangle.width << endl;

	cout << "Area of the rectangle:" << rectangle.length * rectangle.width << endl;
	
}
