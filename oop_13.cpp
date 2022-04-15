#include <iostream>
#include <cstring>


using namespace std;
// Operator overloading binary
class Triangle
{
private:
    float width,height;
public:
    Triangle(float a = 0, float b = 0)
    {
        width = a;
        height = b;
    }

    void getdata()
    {
        cout << "Enter width \n";
        cin >> width;
        cout << "Enter height \n";
        cin >> height;
    }

    void showdata()
    {
        cout << "Width and height = (" << width << "," <<height<<")" << endl;
    }

    void add(Triangle a,Triangle b)
    {   
        width = a.width + b.width;
        height = a.height + b.height;
    }

    Triangle operator+(Triangle b)
    {
        Triangle c;
        c.width = width + b.width;
        c.height = height + b.height;
        return c;
    }
    
    Triangle operator-(Triangle b)
    {
        Triangle c;
        c.width = width - b.width;
        c.height = height - b.height;
        return c;
    }

    Triangle operator*(Triangle b)
    {
        Triangle c;
        c.width = width * b.width;
        c.height = height * b.height;
        return c;
    }

    Triangle operator/(Triangle b)
    {
        Triangle c;
        c.width = width / b.width;
        c.height = height / b.height;
        return c;
    }
};

Triangle add(Triangle a, Triangle b)
{
    Triangle c;
    c.add(a,b);
    return c;
}

int main()
{   
    Triangle c1, c2(3.5,1.5),c3;

    c1.getdata();

    c3 = c1 - c2;// c1.operator-(c2)

    // c3 = add(c1,c2);
    c3.showdata();

    return 0;
}