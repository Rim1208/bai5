#include<iostream>
using namespace std;
class Circle{
    private:
    const double pi = 3.14159;
    double Radius;
    double DefaultConstructor;
    double Constructor;
    double Area;
    double Diameter;
    double Circumference;
public :
   Circle();
   Circle(double);
   void setRadius(double R);

    double getRadius(double) const;
    double getArea(double) const;
    double getDiameter(double)const;
    double getCircumference(double) const;
    string getRadius;
    void display();




    
    



    
    

};
