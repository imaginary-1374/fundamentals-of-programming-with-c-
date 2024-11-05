#include <iostream>
using namespace std;
int main()
{


//  for (int i=0;i<19;i++)
//  {
// if (i%2!=0 )
//     {
//     continue;
//     }

// if ( i>8 && i<14)
//     {
//       continue;
//     }

//     cout << i << endl;
//  }



int i=0;

 while (i<20)
 {


   if (i<10 || i>12)
    {
    cout << i << endl;
    }
 
    i+=2;

 }
 
// Output Needed
// 0
// 2
// 4
// 6
// 8
// 14
// 16
// 18
    return 0;
}