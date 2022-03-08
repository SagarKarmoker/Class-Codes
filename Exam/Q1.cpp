#include <iostream>
#include <cstring>
#include <stdlib.h>  
using namespace std;

class Student
{
public:
    int id;
    char *name;
    float CGPA;

    int getId()
    {
        return this->id;
    }
    void setId(int id)
    {
        this->id = id;
    }

    void getname()
    {
        while(*name != '\0'){
            cout << *name++;
        }
        cout << endl;
    }
    void setname(const char *n)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    } 

    float getCGPA()
    {
        return this->CGPA;
    }
    void setCGPA(float CGPA)
    {
        this->CGPA = CGPA;
    }

    Student() {}

    Student(int std_id, char *n, float cg)
    {
        id = std_id;
        name = n;
        CGPA = cg;
    }
};

int main()
{
    int n;
    cin >> n;

    Student *std = new Student[n];

    int id;
    // char *name;
    char name[100];
    float cg;

    for (int i = 0; i < n; i++)
    {
        cin >> id;
        cin >> name;
        cin >> cg;
        
        (std + i)->setId(id);
        (std + i)->setname(name);
        (std + i)->setCGPA(cg);
    }

    cout << "Maximum cg : " << endl;

    for (int i = 0; i < n; i++)
    {
        if ((std + i)->getCGPA() == 4)
        {
            cout << (std + i)->getId() << " and ";
            (std + i)->getname();
        }
    }

    /* for (int i = 0; i < n; i++)
    {
        if (std[i].getCGPA() == 4)
        {
            cout << std[i].getId() << " and " << std[i].getname() << endl;
        }
    } */

    return 0;
}

/**
 * @brief 
 *  182 sagar 4
    733 kar 3.99
    843 jonh 3.80
    832 smit 3.98
    947 dan 4.00
 * 
 */