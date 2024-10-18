#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double x1, x2, y1, y2, distance, distance_x, distance_y;
	cout << "Enter the x coordinate of the first point: ";
	cin >> x1;
	cout << "Enter the y coordinate of the first point: ";
	cin >> y1;
	cout << "Enter the x coordinate of the second point: ";
	cin >> x2;
	cout << "Enter the y coordinate of the second point: ";
	cin >> y2;
	distance_x = x2 - x1;
	distance_y = y2 - y1;
	distance = sqrt (distance_x * distance_x + distance_y * distance_y);
	cout << "The distance between the two point is " << distance << endl;
}