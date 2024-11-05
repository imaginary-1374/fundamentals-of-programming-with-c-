#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

cout << max(111,123) << "\n" ;

cout << min(-100,-124) << "\n";

cout << "\n===============\n";

int nums[] ={5, 10, 5, 86, -5, 20, -150, 5, -142, 5};

int numssize= size(nums);

int checkminnum= 0;

int checkmaxnum= 0;

//min function

for (int i = 0; i < numssize; i++)
{
    if (nums[i]< checkminnum) //min
    {
        checkminnum = nums[i];
    }
}
    cout << checkminnum ;

cout << "\n====================\n";

//max function
for (int i = 0; i < numssize; i++)
{
    if (nums[i]> checkmaxnum) //max
    {
        checkmaxnum = nums[i];
    }
}
    cout << checkmaxnum ;


cout << "\n====================\n";


//count function
int counter =0;

int numcount;

cout<< "type the number you want to count:\n" ;

cin>> numcount;

for (int i = 0; i < numssize; i++)
{
    if (nums[i]==numcount)
    {
        counter++;
    }
    
}

cout << "\n" << counter;

    return 0;
}