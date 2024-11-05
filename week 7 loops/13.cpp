#include <iostream>
using namespace std;
int main()
{

for (int i = 2; i < 128;i=i*2+2)
{
   cout << i << "\n";
}

cout << "===================";


int i =2;

while (i<130)
{
    cout << i << "\n";
    i=i*2+2;
}



    return 0;
}
// Output Needed
// 2
// 6
// 14
// 30
// 62
// 126