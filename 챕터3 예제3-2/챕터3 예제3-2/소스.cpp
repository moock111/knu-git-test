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
	cout << "���� ���� �β�";
	cin>>rect.width ;
	cin>>rect.height ;
	cin >> rect.thickness;
	cout << "�簢���� ������ " << rect.getArea() << endl;
	cout << "�簢���� ü���� " << rect.getv() << endl;
}