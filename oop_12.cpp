#include <iostream>
#include <cstring>


using namespace std;

// Friend Functions and Classes

class A
{
private:
    int k, l;
};

class B
{
private:
    int h,i;
};

class CSquare;
class Tri;
class CRectangle
{
private:
    int width,height;
    friend CRectangle duplicate(CRectangle R);
    friend int Sum(Tri T, CRectangle R);
public:
    void set_values(int,int);
    int area(void)
    {
        return (width * height);
    }

    void convert(CSquare);
};

class CSquare
{
private:
    int side;
public:
    void set_side(int x)
    {
        side = x;
    }

    friend class CRectangle;
};

void CRectangle::convert(CSquare a)
{
    width = a.side;
    height = a.side;
};

void CRectangle::set_values(int a, int b)
{
    width = a;
    height = b;
}
CRectangle duplicate(CRectangle R)
{
    CRectangle T;
    T.width = R.width * 2;
    T.height = R.height * 2;
    return T;
}

class Tri
{
    private:
        int W,H;
        friend int Sum(Tri T, CRectangle R);
    public:
        Tri(int a,int b)
        {
            W = a;
            H = b;   
        }
};
int Sum(Tri T, CRectangle R)
{
    return T.W + R.width;
};

int main()
{   
    CRectangle r;
    r.set_values(2,3);
    Tri l(5,10);
    cout << Sum(l,r) << endl;

    CSquare sqr;
    CRectangle rect;
    
    sqr.set_side(4);
    rect.convert(sqr);
    cout << rect.area() << endl;

    return 0;
}




// int main()
// {   
//     CRectangle rect, rectb;
//     rect.set_values(2,3);
//     rectb = duplicate(rect);
//     cout << "The area befor duplicate function = " << rect.area() << endl;
//     cout << "The area after duplicate function = " << rectb.area() << endl;
//     cout << rect.area() << " " << rectb.area() << endl;
//     return 0;
// }


// class MyClass
// {
// private:
//     int a,b;
// public:
//     MyClass(int i, int j)
//     {
//         a = i;
//         b = j;
//     }
//     friend int sum(MyClass ob);
// };

// int sum(MyClass ob)
// {
//     return ob.a + ob.b;
// };

// int main()
// {
//     MyClass o(10,20);
//     cout << sum(o) << endl;
//     return 0;
// };