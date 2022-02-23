#include <iostream>
using namespace std;

class Circle{
private:
    double radius;
public:
    Circle(){}

    Circle(double r){
        radius = r;    // this->radius = radius can be used.[this itself a pointer, it point to class variables]
    }

    void setRadius(double r){
        radius = r;
    }

    double getRadius(){
        return radius;
    }

    void area(){
        double area = 3.14 * radius * radius;
        cout << area << endl;
    }
};

int main(){
    Circle c1;
    c1.setRadius(10);
    c1.area();

    // Pointer object
    Circle* c2;
    c2 = &c1;
    (*c2).area();
    c2->area();   // Arrow Pointer sign or Arrow notation

    // Another type
    Circle* c3 = new Circle();
    c3->setRadius(4.1);
    c3->area();
    cout << c3->getRadius();

    // Circle type array
    int size = 10;
    Circle* c4 = new Circle[size * sizeof(Circle)];

    for(int i = 1; i <= size; i++){
        // c4[i].setRadius(i); 
        (c4 + i)->setRadius(i);
    }

    cout << "\nArea of these radius : " << endl;
    for(int i = 1; i <= size; i++){
        (c4++)->area();  // same as c4 + i
    }


    //free memory
    delete c2;
    delete c3;
    delete[] c4;

    return 0;
}