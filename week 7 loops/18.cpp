#include <iostream>
using namespace std;
int main ()
{
int nums[] = {30,27,24,21,18,15,12,9,6,3};

   for (int i = 0; i < 10; i++)
    {
          cout << nums[i] << "\n" ;
    }

cout << "without even nums:\n";

    int i = 0;

    while (i<10)
    {
        if (nums[i]%2!=0)
         {
           cout << nums[i] << endl;
         }
         i++;
    
    }




    return 0;
}

 // Output Needed
// 30
// 27
// 24
// 21
// 18
// 15
// 12
// 9
// 6
// 3

// Without Even Numbers
// 27
// 21
// 15
// 9
// 3