#include <iostream>
#include <array>
using namespace std;
int main()
{
int i=0;

// For Output
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10


 for (; i<11;i++)
  {
      cout << i << endl;
  }


// While Output
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10


  while (i <11)
 {
    cout << i << endl;
    i++;
 }

// Do While Output
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10


do
{
    cout << i << endl;
    i++;

} while (i<11);



    return 0;
}
