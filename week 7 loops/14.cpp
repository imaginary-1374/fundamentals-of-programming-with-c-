#include <iostream>
#include <string.h>
using namespace std;
int main()
{

// Friends Array
 string friends[] = {"zaki", "mostafa", "hassan", "abdo"};

// for (int i = 0; i < 4; i++)
// {
//     if (i==0||i==3)
//     {
//         continue;
//     }
    
//     cout << friends[i] << "\n";
// }

int i=0;


while (i<2)
{
   i+=1;
    cout << friends[i] << "\n";
}




    return 0;
}

// // Output Needed
// "mostafa"
// "hassan"