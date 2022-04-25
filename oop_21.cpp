#include <iostream>
#include <cstring>


using namespace std;
//Polymorphism
class CPolygon
{
protected:
    int width,height;
public:
    void set_values(int a, int b)
    {
        width = a; height = b;

    }
    virtual int area(void)
    {
        return (0);
    }

};

class CRectangle : public CPolygon
{
public:
    int area(void)
    {
        return (width * height);
    }
};

class CTriangle : public CPolygon
{
public:
    int area(void)
    {
        return width * height / 2;
    }
};

int main()
{
    CRectangle rect;
    CTriangle trgl;
    CPolygon poly;
    CPolygon * p1, *p2,*p3;
    p1 = &rect;
    p2 = &trgl;
    p3 = &poly;

    p1->set_values(4,5);
    p2->set_values(4,5);
    p3->set_values(4,5);

    cout << p1->area() << endl;
    cout << p2->area() << endl;
    cout << p3->area() << endl;

    return 0;
}
// Polymorphism
// class CPolygon
// {
// protected:
//     int width,height;
// public:
//     void set_values(int a, int b)
//     {
//         width = a; height = b;

//     }

// };

// class CRectangle : public CPolygon
// {
// public:
//     int area(void)
//     {
//         return (width * height);
//     }
// };

// class CTriangle : public CPolygon
// {
// public:
//     int area(void)
//     {
//         return width * height / 2;
//     }
// };

// int main()
// {   
//     CRectangle rect;
//     CTriangle trgl;

//     CPolygon *p1, *p2;

//     p1 = &rect;
//     p2 = &trgl;
    
//     p1->set_values(4,5);
//     p2->set_values(10,3);

//     //cout << p1->area() << " "<< p2->area() << endl;
//     cout << rect.area() << endl;
//     cout << trgl.area() << endl;

//     return 0;
// }