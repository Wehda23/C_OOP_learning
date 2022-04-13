#include <iostream>
#include <cstring>
#include <algorithm>


using namespace std;




class Car{
private:
    char name[15];
    char color[10];
    int maxspeed;
    int model;

public:
    void set_name(const char n[])
    {
        strcpy_s(name,n);
    };
    void set_color(const char n[])
    {
        strcpy_s(color,n);
    };
    void set_maxspeed(int m)
    {
        maxspeed = m;
    }
    void set_model(int m)
    {
        model = m;
    }

    char* get_name()
    {
        return name;
    }
    char* get_color()
    {
        return color;
    }
    int get_maxspeed()
    {
        return maxspeed;
    }
    int get_model()
    {
        return model;
    }
    void print()
    {
        cout << "name = " << get_name() << endl;
        cout << "color = " << color << endl;
        cout << "maxspeed = " << maxspeed << endl;
        cout << "model =  " << get_model() << endl;
    }

};

class Triangle{
private:
    float base, height;
public:
    void set_base_height(float b,float h)
    {
        base = b;
        height = h;
    }
    float area()
    {
        return 0.5 * base * height;
    }
    void print()
    {
        cout << "Base = " << base << endl;
        cout << "Height = " << height << endl;
        cout << "Area = " << area() << endl;
    }
};

int main()
{   
    Triangle y;
    y.set_base_height(15,20);
    y.print();





    // car x;

    // x.set_name("BMW");
    // x.set_color("black");
    // x.set_maxspeed(300);
    // x.set_model(2019);
    // x.print();

    return 0;
}