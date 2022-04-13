#include <iostream>
#include <cstring>

using namespace std;
// Constructors
/*
    Carry the same name of the class
    Does not return any values
    It calls for a new identification on calling the constructor

*/
class Triangle
{
private:
    float base, height;
public:
    Triangle()// empty constructor
    {
        cout << "first constructor" << endl;
        base = 0;
        height = 0;

    }
    Triangle(int b, int h)// parametarize constructor.
    {
        base = b;
        height = h;
        cout << "p constructor \n";
    }
    void set_base_height(float b,float h)
    {
        base = b;
        height = h;
    }
    float area()
    {
        return 0.5 * base * height;
    }
    void print()
    {
        cout << "Base = " << base << endl;
        cout << "Height = " << height << endl;
        cout << "Area = " << area() << endl;
    }
};


class student
{
private:
    char name[20];
    int id;
public:
    student()
        {
            strcpy(name,"no name");
            id = 0;
        }
    student(const char n[] , int i)
    {
        cout << "parameteraize constructor \n";
        strcpy(name,n);
        id = i ;
    }
    student(const char* n)
    {
        strcpy(name,n);
    }
    void print()
    {
        cout << "Name : " << name << "\nID : " << id << endl;
    }

};

class Copy 
{
    private:
        int a1,a2,a3,a4,a5,a6,a7,a8;
    public:
        Copy(int aa1,int aa2,int aa3,int aa4,int aa5,int aa6,int aa7,int aa8)
        {
            a1 = aa1;
            a2 = aa2;
            a3 = aa3;
            a4 = aa4;
            a5 = aa5;
            a6 = aa6;
            a7 = aa7;
            a8 = aa8;
        }
        Copy(const Copy &a)
        {
            a1 = a.a1;
            a2 = a.a2;
            a3 = a.a3;
            a4 = a.a4;
            a5 = a.a5;
            a6 = a.a6;
            a7 = a.a7;
            a8 = a.a8;


        }
        void print()
        {
            cout << a1 << " " << a2 << " "<< a3 << " "<< a4 << " "<< a5 << " "<< a6 << " "<< a7 << " "<< a8 << " " << endl;
        }
    
};

int main()
{
    Copy g(1,2,3,4,5,6,7,8);
    g.print();
    Copy h(g);
    h.print();
return 0;
}





// int main()
// {   
    // Triangle ob(10,5),ob2;

    // ob.print(); 
    // ob2.print();
    // ob2.set_base_height(50,20);
    // ob2.print();
    //ob.print();

//     return 0;
// }



