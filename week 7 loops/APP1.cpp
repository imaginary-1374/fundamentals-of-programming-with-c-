#include <iostream>
#include <array>
using namespace std;

int main()
{
//count positive and even nums only

int nums[]={10,20,-20,13,30,-30,40};

    // array< int , 7 > num[]={10,20,-20,13,30,-30,40};

   int r = 0; // result

   int NumsSize=size(nums); // number of elements

    for (int i = 0; i < NumsSize; i++)
    {
        if ( nums[i] % 2 == 0 && nums[i] > 0 )  

          r+=nums[i];
    }
    
        cout << "Result is: " << r;
    

    return 0;
}
