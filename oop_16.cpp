#include <iostream>
#include <cstring>


using namespace std;
// Continue Operator overloading/Relational Operator Unary
class Relational 
{
private:
    int x, y, z;
public:
    Relational()
    {
        x = y = z =0;
    }
    Relational(int i,int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }
    bool operator==(Relational b)
    {
        return x == b.x && y == b.y && z == b.z;
    }
    bool operator<=(Relational b)
    {
        return x <= b.x && y <= b.y && z <= b.z;
    }
    bool operator<(Relational b)
    {
        return x < b.x && y < b.y && z < b.z;
    }
    bool operator>(Relational b)
    {
        return x > b.x && y > b.y && z > b.z;
    }
    bool operator>=(Relational b)
    {
        return x >= b.x && y >= b.y && z >= b.z;
    }
    bool operator!=(Relational b)
    {
        return x != b.x || y != b.y || z != b.z;
    }

};

int main()
{   
    Relational a(10,10,10), b(10,10,1);
    if(a != b)
        cout <<"The two objects are equal\n";
    else
        cout <<"The two objects are not equal\n";
    return 0;
}