#include <iostream>
#include <cstring>


using namespace std;
//Operator overloading/ input,output,int,[]

class Array
{
private:
    int a[3];
public:
    Array()
    {
        for(int i = 0; i < 3; i++)
            a[i] = i+2;   
    }
    int&operator[](int index)
    {
        return a[index];
    }



};


int main()
{
    Array ob;
    cout << ob[2] << endl;//ob.operator[](int 2)
    ob[2] = 20;
    cout << ob[2] << endl;
    return 0;
}

// class Number
// {
// private:
//     int num;
// public:
//     Number()//empty constructor
//     {
//         num = 0;
//     }
//     Number(int x)//parametarize constructor
//     {
//         num = x;
//     }
//     Number(const Number &ob)//copy constructor
//     {
//         num = ob.num;
//     }

//     int getNum()
//     {
//         return num;
//     }
    
//     operator int()
//     {
//         return int(num);
//     }
// };



// int main()
// {
//     Number ob(30);
//     int x = 10;
//     x = ob;
//     cout << ob.getNum() << endl;
//     cout << "x = " << x << endl;
//     return 0;
// }

// class Distance
// {
// private:
//     int feet;
//     int inches;
// public:
//     Distance(){
//         feet = 0;
//         inches = 0;
//     }
//     Distance(int f,int i)
//     {
//         feet = f;
//         inches = i;
//     }
//     friend istream&operator>>(istream&input,Distance c)
//     {
//         input >> c.feet >> c.inches;
//         return input;
//     };

//     friend ostream&operator<<(ostream&output,Distance c)
//     {
//         output << "Feets : " << c.feet << "\nInches : " << c.inches << endl;
//         return output;
//     }

// };



// int main()
// {   
//     Distance D1(11,10),D2(5,11),D3(10,20);
//     cin >> D3;//operator>>(D3)
//     cout << D3;//operator<<(D3)
//     return 0;
// }