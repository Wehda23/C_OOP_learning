#include <iostream>
#include <cstring>


using namespace std;

class Student
{
    char name[20];
    int ID;
public:
    Student() // Empty Constructor
    {
        cout << "empty\n";
        strcpy(name,"No name");
        ID = 0;
    }

    Student(const char* n, int id)//Constructor overloading
    {   
        cout << "parameterize\n";
        strcpy(name,n);
        ID = id;
    }

    void print(void)
    {
        cout << name << "\t" << ID << endl;
    }

};


int main()
{
    Student S1("Ali",123), S2("Ahmad",456), *p;
    Student arr[3] {S1,S2,Student("Waheed",2014)};
    p = arr;
    for(int i = 0 ; i < 3 ;i++)
        (p+i)->print();

    return 0;
}











// int main()
// {   
//     int arr[5] = {10,50,40,66,33},number {5};
//     int *p;
//     p = arr;
//     // p = &arr[0] same as above for arrays <--
//     for (size_t i = 0; i < 5; i++)
//     {
//         /* code */
//         cout << *(p++) << endl;
//     }
    
//     return 0;
// }