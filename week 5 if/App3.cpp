
#include <iostream>
using namespace std;

int main()
{
cout << "== Simple calculator ==\n";

int op;
double num1, num2;

cout << "Enter the first number\n";
cin >> num1;

cout << "Choose the Number of operation\n";
cout << "[1] + \n";
cout << "[2] - \n";
cout << "[3] * \n";
cout << "[4] / \n";
cin >> op;


cout << "Enter the second number\n";
cin >> num2;

// if


if(op == 1)
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;


if(op == 2)
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;


if(op == 3)
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;


if(op == 4)
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

else 
    cout << "operation Is Not Valid\n";


// switch 

switch (op)
{
  case 1:
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;

  case 2:
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;

  case 3:
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    break;

  case 4:
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    break;

  default: 
    cout << "operation Is Not Valid";
}


return 0;
}