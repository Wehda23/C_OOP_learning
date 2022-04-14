#include <iostream>
#include <cstring>


using namespace std;
// Static Class Member Static Member Function
class Student
{
    static int count;
    char name[20];
    int first,second,final,total,ID;
public:
    static void print_count()
    {
        cout <<"Students constructed: " << count << endl;
    }
    Student()//Constructor
    {   
        strcpy(name,"No name");
        ID = 0;
        first = second = final = 0;
        count++;
        print_count();
    }
};
int Student::count = 0;

int main()
{
    Student S1,S2;
    Student St[3];
    
    Student::print_count();

    return 0;
};