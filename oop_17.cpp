#include <iostream>
#include <cstring>

using namespace std;
// Operator Overloading/Friend Operator functions.
class Binary
{
private:
    int x,y;
public:
    Binary(int a = 0, int b = 0)
    {
        x = a; y =b;
    }
    Binary operator+(Binary c2)
    {
        Binary c3;
        c3.x = x + c2.x;
        c3.y = y + c2.y;
        return c3;
    }
    Binary operator+(int num)
    {
        Binary c3;
        c3.x = x + num;
        c3.y = y + num;
        return c3;
    }
    void print(void)
    {
        cout << x << "," << y << endl;
    }
    friend Binary add(Binary,int);
    friend Binary operator+(int num,Binary c1);
};

Binary operator+(int num,Binary c1)
{   
    Binary ob;
    ob.x = c1.x + num;
    ob.y = c1.y + num;
    return ob;
}

Binary add(Binary c,int num)
{   
    Binary d;
    d.x = c.x + num;
    d.y = c.y + num;
    return d;
}

int main()
{
    Binary c1(3,1), c2(1,2),c3;
    c3 = c1 + c2;// c3 = c1.operator+(c2)
    c3.print();

    c3 = c1 + 10;//c3 = c1.operator+(10)
    c3.print();

    c3 = 10 + c1;// c3 = operator+(c1,10)
    c3.print();

    c3 = add(c1,20);
    c3.print();

    return 0;
}