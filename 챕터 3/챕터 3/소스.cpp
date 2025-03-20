#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
	int innerRadius;
	int outerRadius;
	double getinnerArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
double Circle::getinnerArea() {
	return 3.14 * innerRadius * innerRadius;
}
int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	Circle donut2;
	donut.innerRadius = 1;
	donut.outerRadius = 0.5;


}