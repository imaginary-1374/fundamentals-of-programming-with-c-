/*
  Control Flow
  - Ternary Operator

  Syntax
  (Condition) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 15;

  if (age >= 18)
  {
    cout << "Your Age Is OK\n";
  }
  else
  {
    cout << "Your Age Is Not OK\n";
  }

  cout << (age >= 18 ? "Age Is OK\n" : "Age Is Not OK\n");

  string msg = age >= 18 ? "Age Is OK\n" : "Age Is Not OK\n";

  cout << msg;

  return 0;
}