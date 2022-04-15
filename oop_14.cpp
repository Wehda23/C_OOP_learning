#include <iostream>
#include <cstring>


using namespace std;
// this

class Student
{
private:
    int id;
public:
    void set_id(int id)
    {
        this->id = id;
    }

    void print()
    {
        cout << "ID : " << id << endl;
    }

};

int main()
{
    Student a,b;
    a.set_id(130);
    b.set_id(2014);
    a.print();
    b.print();
    return 0;
}


// class stud {
// public:
//     void address()
//     {
//         cout << this;
//     }
// };


// int main()
// {   
//     stud a,b,c;
//     cout << "The address of a\t";
//     a.address();
//     cout << "\t" << &a << endl;
//     cout << endl << "The address of b\t";
//     b.address();
//     cout << endl << "The address of c\t";
//     c.address();
//     cout << endl;

//     return 0;
// }