#include <iostream>
#include <cstring>


using namespace std;
//Class Template/ Template Specialization.
template<class T>
class A_char{
public:
    A_char(T x)
    {
        cout << x << " is not character" << endl;
    }

};

template<>// template specialization
class A_char<char>
{
public:
    A_char(char x)
    {
        cout << x << " is a character" << endl;
    }
};

template<class T>
class number{
    T first,second;
public:
    number(T a, T b)
    {
        first = a;
        second = b;
    }
    T max();
};

template<class T>
T number<T>::max()
{
    return (first > second ? first : second);
};


int main()
{
    A_char<int> obj1(8);
    A_char<double> obj2(9.3);
    A_char<char> ob3('W');
    // number<int>ob(10,20);

    // cout << ob.max() << endl;

    return 0;
}