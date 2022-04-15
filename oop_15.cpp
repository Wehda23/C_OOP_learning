#include <iostream>
#include <cstring>


using namespace std;
// Operator overloading/Unary operator.
class Unary
{
private:
    int x, y;
public:
    Unary(int i=0 ,int j=0)
    {
        x=i; y= j;
    }
    void show(){cout << x << " " << y << endl; }
    Unary operator++()//prefix
    {
        x++;
        y++;
        return *this;
    }
    Unary operator++(int)//postfix
    {
        Unary t;
        t = *this;
        x++;
        y++;
        return t;
    }

    Unary operator-()
    {
        x = -x;
        y = -y;

        return *this;
    }
    bool operator!()
    {
        return (x == 0 && y == 0);
    }

    Unary operator+=(Unary other)
    {
        x = x + other.x;
        y = y + other.y;
        return *this;
    }
    
};




int main()
{   
    Unary b(1,2),b2(3,3);
    b += b2;
    b.show();


    return 0;
}

// int main()
// {   
//     Unary x;
//     if(!x)
//         cout << "True Statement\n";
//     else
//         cout << "False Statement\n";
//     return 0;
// }

// int main()
// {   
//     Unary x(1,2);
//     -x;
//     x.show();

//     return 0;
// }

// int main()
// {
//     Unary v(10,20),k;
//     v++; 
//     k = v++;
//     k.show();
//     v.show();
//     return 0;
// }