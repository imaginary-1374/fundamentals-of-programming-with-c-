#include <iostream>
#include <array>
using namespace std;
int main()
{
    
    // Example 1

int vals_1[] = {100, 200, 600, 200, 100};

// Output
//"Array Is Palindrome"

 if(vals_1[0]==vals_1[4]&& vals_1[1]==vals_1[3])

  cout << "Array Is Palindrome\n";


// Example 2

int vals_2[] = {100, 200, 200, 100};

// Output
//"Array Is Palindrome"

 if(vals_2[0]==vals_2[3]&& vals_2[1]==vals_2[2])

  cout << "Array Is Palindrome\n";


// Example 3
int vals_3[] = {100, 300, 600, 200, 100};

// Output
//"Array Is Not Palindrome"

if(vals_3[0]==vals_3[3]&& vals_3[1]==vals_3[2])

  cout << "Array Is Palindrome\n";

else 

  cout << "Array Is Not Palindrome";

    return 0;
}