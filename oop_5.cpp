#include <iostream>
#include <cstring>



using namespace std;

// destructor tutorial

/*
tilda (~)
Does not either take paramter void or any value.
Only one destructor can exist in the class.
cleans an object from memory opposite of constructor. 

*/
class Rectangle {
    int W,H;
public:
    Rectangle() :W(0),H(0)
    {
        cout << "W = " << W << " H = " << H <<endl;
    }
    Rectangle(int a, int b) :W(0),H(0)
    {
        W = a;
        H = b;
        cout << "A rectangle has been created\n";
        Rectangle ob;
    }
    ~Rectangle()
    {
        cout <<  W << " "<< H << " A Rectangle has been deleted" << endl ;
    }


};

class Phone
{
private:
    char name[10];
    char model[10];
    int price;
public:
    Phone()
    {

    }
    Phone(const char n[],const char m[],int p)
    {
        strcpy(name,n);
        strcpy(model,m);
        price = p;
    }
    void print();
    ~Phone();

};
Phone::~Phone()
{
    cout << "Object destructed\n";
}
void Phone::print()
{
    cout << "Name = " << name << endl;
    cout << "Model  = " << model << endl;
    cout << "Price = " << price << endl;
}

class Student
{
    char name[20];
    int ID;
public:
    Student()
    {
        cout << "Object created\n";
    }

    ~Student()
    {
        cout << "Object destructed\n";
    }

    void Set_Name_ID(const char* n, int id)
    {
        strcpy(name,n);
        ID = id;
    }
    
    void print()
    {
        cout << name << "\t" << ID << endl;
    }

};

void F(Student S)
{
    Student S1;
    S1 = S;
    S.Set_Name_ID("Sami",12345);
    S.print();
    S1.print();
}

int main()
{   
    Student St1 , St2;
    St1.Set_Name_ID("Ahmad",11111);
    St2.Set_Name_ID("Waheed",22222);
    cout << "Going to Function\n";
    F(St1);
    cout << "back from function\n";
    St1.print();
    
    // Phone ob1,ob2("Huwawi","Mate 9",400);

    // ob2.print();
    // Rectangle R1(3,4),R2(5,6);
    // Rectangle R3;
    
    return 0;
}


