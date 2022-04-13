#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
/* 
 * This is the second tutorial of OOP Tutorial Review Arrays.
*/

void ascending(int arr[],int size);


int main()
{
    int arr[] = {22,55,88,99,1,0,7};
    
    sort(arr,arr + 7);
    for (size_t i = 0; i < 7; i++)
    {
        /* code */
        cout << arr[i] << " " ;
    }
    cout << arr + 0 <<endl;

   

    return 0;
    
}

void ascending(int arr[],int size)
{
    int t;
    for (size_t i = 0; i < size - 1; i++)
    {
        /* code */
        for (size_t j = 0; j <  7 - 1; j++)
        {
            /* code */
            if(arr[j] > arr[j+1]){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
        
    }
}
/*
convertion functions
atoi string > to integer
atof string > to float
atol string > to long
atoll string > to long long
*/