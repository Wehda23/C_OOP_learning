#include <iostream>
#include <cstring>


using namespace std;

// Struct

struct Exam
{
    float first;
    float second;
    float final;
};

class Subject
{
    char name[10];
    Exam exam;
public:
    Subject()
    {
        strcpy(name,"No Name");
        exam = {0,0,0};
    }
    Subject(const char* n,float fa, float s, float fi)
    {
        strcpy(name,n);
        exam = {fa,s,fi};
    }
    float total()
    {
        return exam.first + exam.second + exam.final;
    }
    void print()
    {
        cout << "The Subject = " << name << endl
        << "First Exam = " << exam.first << endl
        << "Second Exam = " << exam.second << endl
        << "Final Exam = " << exam.final << endl
        << "The Total is = " << total() << endl;
    }

};


int main()
{
    Subject e("OOP",24,25,49);

    e.print();
    return 0;
}





















// struct Distance
// {
//     int feet;
//     float inches;
// };

// Distance add_distance(Distance d1, Distance d2)
// {
//     Distance result;
//     result.feet = d1.feet + d2.feet;
//     result.inches = d1.inches + d2.inches;
//     return result;
// };

// int main()
// {
//     Distance x,y,z;
//     cout << "Enter Feet Value \n";
//     cin >> x.feet >> y.feet;
//     cout << "Enter inches value \n";
//     cin >> x.inches >> y.inches;
//     z = add_distance(x,y);
//     cout << "z.feet = " << z.feet << "\t z.inches = \t "<<z.inches << endl;

//     return 0;
// };














// struct Car
// {
//     string name;
//     string color;
//     int model;
//     int maxspeed;
//     void print()
//     {
//         cout << "Name = " << name << endl;
//         cout << "Color = " << color << endl;
//         cout << "Model = " << model << endl;
//         cout << "Max Speed = " << maxspeed << endl;
//     };
// };

// int main()
// {   
    
//     Car g = {"BMW","Red",2019,300},k;

//     k.print();
//     g.print();

//     return 0;
// }