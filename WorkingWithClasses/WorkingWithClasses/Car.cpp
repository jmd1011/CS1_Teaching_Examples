//Coded by James Decker in April 2013 using Visual Studio 2012
//Not to be used or redistributed without the explicit permission of the Utah State University Computer Science Department

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Car
{
public:
    Car();
    Car(int, string, string, int);

    int getWheels();
    void setWheels(int);

    string getMake();
    void setMake(string);
    
    string getModel();
    void setModel(string);
	
    int getTopSpeed();
    void setTopSpeed(int);

    void printCar();

private:
    int wheels;
    string make, model;
    int topSpeed;
};

Car::Car()
{
    wheels = 4;
    make = "Saturn";
    model = "SL1";
    topSpeed = 90;
}

Car::Car(int w, string m1, string m2, int s)
{
    wheels = w;
    make = m1;
    model = m2;
    topSpeed = s;
}

//////////////////////////////
//Our functions will go here//
//////////////////////////////

//getWheels
int Car::getWheels()
{
    return wheels;
}

//setWheels
void Car::setWheels(int w)
{
    wheels = w;
}

//getMake
string Car::getMake()
{
    return make;
}

//setMake
void Car::setMake(string m)
{
    make = m;
}

//getModel
string Car::getModel()
{
    return model;
}

//setModel
void Car::setModel(string m)
{
    model = m;
}

//getTopSpeed
int Car::getTopSpeed()
{
    return topSpeed;
}

//setTopSpeed
void Car::setTopSpeed(int ts)
{
    topSpeed = ts;
}

//printCar

void Car::printCar()
{
    cout << left << setw(13) << make << setw(13) << model << setw(13) << wheels << setw(13) << topSpeed << endl;
}

int main()
{
    Car sport, semi, normal;

    sport.setMake("Porsche");
    sport.setModel("911 Turbo");
    sport.setTopSpeed(230);

    semi.setMake("Peterbilt");
    semi.setModel("387");
    semi.setWheels(18);
    semi.setTopSpeed(70);

    cout << left << "Specs:\n"
         << setw(13) << "Make" << setw(13) << "Model" << setw(13) << "Num Wheels" << setw(13) << "Top Speed";
    cout << endl << setw(13) << sport.getMake() << setw(13) << sport.getModel() << setw(13) << sport.getWheels() << setw(13) << sport.getTopSpeed() << endl;
    cout << setw(13) << semi.getMake() << setw(13) << semi.getModel() << setw(13) << semi.getWheels() << setw(13) << semi.getTopSpeed() << endl;
    cout << setw(13) << normal.getMake() << setw(13) << normal.getModel() << setw(13) << normal.getWheels() << setw(13) << normal.getTopSpeed() << endl;

    cout << endl << "Now lets try it inside the printCar() function and compare results...\n";

    cout << "Specs:\n"
         << setw(13) << "Make" << setw(13) << "Model" << setw(13) << "Num Wheels" << setw(13) << "Top Speed" << endl;
    sport.printCar();
    semi.printCar();
    normal.printCar();

    cout << "\nSee how much less code that took? WIN.\nRemember, a good programmer is a lazy programmer.\n\n";

    Car custom(7, "Geo", "Monster", 1000);
    cout << endl;
    custom.printCar();
    cout << endl;
    return 0;
}