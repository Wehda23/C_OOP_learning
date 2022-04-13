#include <iostream>
#include <cstring>



using namespace std;

class CRectangle
{
    int *width, *height;
public:
    CRectangle(int,int); // Constructor paramteraized
    ~CRectangle(); // Desctructor
    int area()
    {
        return (*width * *height);
    }
};
CRectangle::CRectangle(int a, int b)
{
    width = new int;
    height = new int;
    *width = a;
    *height = b;
}
CRectangle::~CRectangle()
{
    delete width;
    delete height;
}
int main()
{
    CRectangle rect(3,4),rectb(5,6);
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;

    return 0;
}













// int main(){
//     int *p1 , *p2;
//     p1 = new int;
//     *p1 = 10;
//     cout << &p1 << endl;
//     cout << "Memory Location " << p1 << "\n";
//     cout << "Contains " << *p1 <<endl;
//     p2 = new int;
//     *p2 = 10;
//     cout << &p2 << endl;
//     cout << "Memory Location " << p2 << "\n";
//     cout << "Contains " << *p2 <<endl;

//     delete p1;
//     delete p2;

//     return 0;
// };