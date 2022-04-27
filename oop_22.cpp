#include <iostream>
#include <cstring>


using namespace std;
// Polymorphesim abstract class.

class CPolygon
{
protected:
    int width,height;
public:
    void set_values(int a, int b)
    {
        width = a; height = b;

    }

    virtual int area(void) = 0;

    void printarea(void)
    {
        cout << this->area() << endl;
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

    CPolygon *ppoly1 = &rect;//early pending
    CPolygon *ppoly2 = &trgl;

    ppoly1->set_values(4,5);
    ppoly2->set_values(4,5);

    cout << ppoly1->area() << endl;
    cout << ppoly2->area() << endl;

    ppoly1->printarea();
    ppoly2->printarea();

    CPolygon *p[2] = {&rect,&trgl};

    for (size_t i = 0; i <2; i++)
    {
        /* code */
        p[i]->area();//p[0]->area()
        p[i]->printarea();//p[0]->printarea();
    }
    
    //early binding, late binding dynamic period
    return 0;
}