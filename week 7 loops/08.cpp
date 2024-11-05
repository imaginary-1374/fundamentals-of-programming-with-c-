#include <iostream>
#include <array>
using namespace std;
int main()
{

/*
  Test Case 1
  Number One: 1
  Number Two: 9
  Output: 3, 5, 7
*/
 int i;
 int s;

  cout << "write 2 nums:\n";

 cin >> i ;
  cout << endl;

 cin >> s ;
  cout << endl;

 if (i>s)
  {
    int alt = s;
    s=i;
    i=alt;
  }

//  for (i+=1;i<s;i++)
//   {
//    if (i % 2 ==0)
//    { 
//     continue; 
//    }

//    cout << i << endl;
//     ++i;
//   }



/*
  Test Case 2
  Number One: 2
  Number Two: 15
  Output: 3, 5, 7, 9, 11, 13
*/

// for (i+=1;i<s;i++)
//   {
//     if (i % 2 ==0)
//    { 
//     continue; 
//    }
//    if (i % 2 ==0)
//    { 
//     continue; 
//    }

//    cout << i << endl;
//     ++i;
//   }

/*
  Test Case 3
  Number One: 8
  Number Two: 2
  Output: 3, 5, 7
*/

for (i+=1;i<s;i++)
  {
    if (i % 2 ==0)
   { 
    continue; 
   }
   if (i % 2 ==0)
   { 
    continue; 
   }

   cout << i << endl;
    ++i;
  }


    return 0;
}