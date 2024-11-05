#include <array>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
string fName = "Elzero ";
string mName = "Web ";
string lName = "School";

// Output Needed
// Elzero Web School
// Elzero Web School
// Elzero Web School



 cout << fName << mName << lName << "\n";

 cout << fName+mName+lName <<"\n";

 cout << fName.append(mName).append(lName) << "\n";




    return 0;
}

