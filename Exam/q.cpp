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

    char getname()
    {
        return *name;
    }
    void setname(char *n)
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
            cout << (std + i)->getId() << " and " << (std + i)->getname() << endl;
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