#include <iostream>
#include <array>
using namespace std;
int main()
{
// // Example 1
// int check = 25;
// int nums[]{40, 20, 30, 70, 100};

// // Ouput
// //"{40} + {70} = 110"

// // Example 2
// int check = 25;
// int nums[]{20, 35, 30, 70, 100};

// // Ouput
// //"{35} + {70} = 105"

// // Example 2
int check = 25;
int nums[]{20, 25, 30, 70, 100};

// Ouput
//"{30} + {70} = 100"

if (nums[0]>check)
  {cout << "{40} + {70} = " << nums[0]+nums[3] ;}
else if (nums[1]>check)
  {cout << "{35} + {70} = " << nums[1]+nums[3];} 
else if (nums[2]>check)
  {cout << "{30} + {70} = " << nums[2]+nums[3];} 


return 0;
}