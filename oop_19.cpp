#include <iostream>
#include <cstring>


using namespace std;
// Inheritance;



class Base
{
    int i;
public:
    int j,k;

    void seti(int x)
    {
        i = x;
    }
    
    int geti()
    {
        return i;
    }
};

class derived : private Base
{

public:// override private
    int a;
    using Base::j; // make j public again
    using Base::seti; // make seti() public
    using Base::geti; // make geti() public
    //Base::i; // error because i cannot make a private value from parent to public or reach it
};


int main()
{
    derived ob;
    //ob.i = 10;// i is a private member declared in class "Base"
    ob.j = 30;// inherited member as private but was overridden to public in class "derived"
    //ob.k = 30;// inherited as a private member cannot be called as it was not either overriden and inheritance was Private "derived"
    ob.a =40;
    ob.seti(20);
    cout << ob.geti() << endl;
    cout << ob.j << " " << ob.a << endl;
    return 0;
}








// class A
// {
//     int i;
// protected:
//     int j;
// public:
//     int k;

// };

// class B : A //private A
// {
//     int x;
// public:
//     int y;

//     int get_j()
//     {
//         return j;
//     }
// };

// int main()
// {
//     B op;
//     op.k = 7; // cannot access public member declared in class "A"
//     op.y = 9;

//     return 0;
// }

// class A
// {
//     int i;
// protected:
//     int j;
// public:
//     int k;

// };

// class B: public A
// {
//     int x;
// public:
//     int y;
//     int get_i()
//     {
//         return i ;
//     }// cannot access private member Declared in class "A"
//     int get_j()
//     {
//         return j;
//     }
// };


// int main()
// {   
//     B op;
//     op.i = 5; //cannot access private member Declared in class "A"
//     op.j = 6; //cannot access protected member in main or any where outside inherited class or Declared in class "A"
//     op.k = 7;
//     op.x = 8; // cannot access private member declared in class "B"
//     op.y = 9;
//     return 0;
// }



// class CPoloygon{
// protected:
//     int width,height;
// public:
//     void set_values(int a , int b)
//     {
//         width = a; height = b;
//     }
// };

// class CRectangle : public CPoloygon
// {
// public:
//     int area()
//     {
//         return (width * height);
//     }
// };

// class CTriangle : public CPoloygon
// {
// public: 
//     int area()
//     {
//         return (width * height/2);
//     }
// };

// int main()
// {   
//     CRectangle rect;
//     CTriangle tri;
//     rect.set_values(4,5);
//     tri.set_values(4,5);
//     cout << "Rectangle Area = " << rect.area() << endl;
//     cout << "Triangle Area = " << tri.area() << endl;

//     return 0;
// }