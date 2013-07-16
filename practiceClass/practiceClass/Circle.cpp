//Coded by James Decker in March 2013 using Visual Studio 2012
//Not to be used or redistributed without the explicit permission of the Utah State University Computer Science Department

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Circle
{
private:
	double radius;
	string name;

public:
	Circle(){radius = 1; name = "A Nameless Circle";};
	void setRadius(double temp) {radius = temp;};
	void setName(string temp)   {name = temp;};
	double getRadius(){return radius;};
	string getName(){return name;};
	double getArea(){return (std::atan(1.0)*4)*radius*radius;}; //atan(1.0)*4 = pi
};

int main()
{
	//setprecision
	cout << setprecision(2) << fixed;

	Circle c1, c2, c3; //instantiation

	c1.setRadius(5.4);
	c1.setName("Circle 1");

	c2.setRadius(10);
	c2.setName("Circle 2");

	cout << "The radius for " << c1.getName() << " is " << c1.getRadius() << ", and the area is " << c1.getArea() << "." << endl;
	cout << "The radius for " << c2.getName() << " is " << c2.getRadius() << ", and the area is " << c2.getArea() << "." << endl;
	cout << "The radius for " << c3.getName() << " is " << c3.getRadius() << ", and the area is " << c3.getArea() << "." << endl;

	cout << "The radii added together is " << (c1.getRadius() + c2.getRadius() + c3.getRadius()) << "." << endl;

	return 0;
}