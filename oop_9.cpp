#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
string d[] {"sat","sun","mon","tue","wend","thut","fri"};
enum Days {sat=1,sun,mon,tue,wend,thut,fri};

class Week
{
    Days d[7];
public:
    void setday(Days w[])
    {
        for (size_t i = 0; i < 7; i++)
        {
            d[i] = w[i];
        }
        
    }

    void print()
    {
        for (size_t i = 0; i < 7; i++)
        {
            /* code */
            cout << " The number of day " << d[i] << " = " << d[i] << endl;
        }
        

    }
};

int main()
{   
    Days d[] {sat,sun,mon,tue,wend,thut,fri};
    Week g;
    g.setday(d);
    g.print();
    return 0;
};