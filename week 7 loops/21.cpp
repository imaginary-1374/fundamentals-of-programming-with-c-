#include <iostream>
using namespace std;
int main (){

int index = 10;
int jump = 2;

for (;;index -=jump)
{
  cout<< index << endl;

  if (index<4)
    break;
}


    return 0;
}
// Output Needed
// 10
// 8
// 6
// 4