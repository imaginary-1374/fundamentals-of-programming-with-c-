#include <iostream>
using namespace std;
int main ()
{

    int num = 2;
    int result =1;

    while (num < 520) {
            
        cout << result << endl;

    result = result*2+2;
    
    num=result;
   
}
    return 0;
}

// Needed Output
// 1
// 4
// 10
// 22
// 46
// 94
// 190
// 382