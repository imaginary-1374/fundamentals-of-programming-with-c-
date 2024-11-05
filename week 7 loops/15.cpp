#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // Friends Array
string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};


// for (int i = 0; i < 5; i++)
// {
//     if (i==1 || i==2)
//     {
//         continue;
//     }
//     cout << friends[i] << endl;
    
// }

// cout << "==============\n";

int i = 0;

while (i<5)
{
    if (i>=1 && i<=2)
    {
        i++;
        continue;
    }

    cout << friends[i] << "\n";

    i++;
}





    return 0;
}



// Output Needed
// "Ahmed"
// "Ashraf"
// "Amany"