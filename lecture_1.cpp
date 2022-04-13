#include <iostream>
#include <string>
using namespace std;


int main()
{
    string name = "Waheed", weird_name;
    char temp_name[20];
    int numbers[5] = {1,3,4,5,6};
    getline(cin,weird_name);
    cout << weird_name << endl;

    for(int i = 0 ; i < 5 ; i++){
        cout << numbers[i] << endl;
    }
    cout << name << endl;
    return 0;
}