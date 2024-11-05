#include <iostream>
#include <array>
using namespace std;
int main ()
{
int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};


for (int i = 0; i < 8; i++)

{
   int result=nums[i];

 if (result+result==nums[i+1])

    cout << nums[i] << "\n";
}



    return 0;
}

// Output Needed
// 10
// 14
// 40
// 15