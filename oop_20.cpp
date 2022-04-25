#include <iostream>
#include <cstring>

using namespace std;
/*
Constructor and destructor 
operator=() member
friends
*/
class Name
{
   char n[20];
protected:
    void set_name(const char N[])
    {
        strcpy(n,N);
    }
    void print_name()
    {
        cout << n << " ";
    }
};

class ID
{
    int id;
protected:
    void set_id(int i )
    {
        id = i;
    }
    void print_id()
    {
        cout << id << endl;
    }
};

class Student : public Name, public ID
{
public:
    Student(const char name[], int Id)
    {
        set_name(name);
        set_id(Id);
    }
    void print()
    {
        print_name();
        print_id();
    }
};


int main()
{
    Student first("Waheed",2014);
    first.print();
    return 0;
}


// class Mother
// {
// public:
//     Mother()
//     {
//         cout << "mother: empty constructor\n";
//     }
//     Mother(int a)
//     {
//         cout << "mother: parameterize contructor = " << a << endl;
//     }

// };

// class Daughter : public Mother
// {
// public:
//     Daughter()
//     {
//         cout << "daughter: empty constructor\n";
//     }
//     Daughter(int a)
//     {
//         cout << "daughter: parameterize contructor = " << a << endl;
//     }
// };

// class Son : public Mother
// {
// public:
//     Son(int a , int b) : Mother(a) // | Mother(b)
//     {
//         cout << "son : parameterize constructor = " << a << " " << b << endl;
//     }
// };

// int main()
// {
//     Son sara(4,2);

//     return 0;
// }