#include <iostream>
using namespace std;

int main()
{
 int nums[] = {10,20,30,40,50};

  for(int i = 0; i<5; i++)
  {
    if (nums[i]==20)
     {
        continue;
     }


    cout << nums[i] << endl;
    cout << "AFTER" << endl;
  }


    return 0;
}