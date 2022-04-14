#include <iostream>
#include <cstring>


using namespace std;
class Time
{
private:
    int h, m, s;
public: 
    void print() const // constant function
    {
        cout << "The Time = " << h << ":" << m << s << endl;
    }
    Time(int i, int j, int k)
    {
        h = i;
        m = j;
        s = k;
    }
};

int main()
{
    Time noon(12,0,0); //constant object
    noon.print();
    // const float pi = 3.14; 

    
    return 0; 
}