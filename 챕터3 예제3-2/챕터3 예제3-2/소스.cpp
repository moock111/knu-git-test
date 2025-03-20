#include <iostream>
using namespace std;
class Rectangle {
public:
	int width;
	int height;
	int getArea(); 
	int getv();
	int thickness;
};
int Rectangle::getArea() { 
	return width * height;
}
int Rectangle::getv() {
	return width * height* thickness;
}
int main() {
	Rectangle rect;
	cout << "넓이 높이 두께";
	cin>>rect.width ;
	cin>>rect.height ;
	cin >> rect.thickness;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "사각형의 체적은 " << rect.getv() << endl;
}