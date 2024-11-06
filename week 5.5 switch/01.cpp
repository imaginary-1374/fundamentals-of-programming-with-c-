/*

swith(variable)

{

case int,char:

//do somthing;

break;


//default in switch == else in if condition

defaut:

//do somthing else

}

*/
#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "Enter a Year\n";
  cin >> year;

  switch (year)
  {

  case 1982:
    cout <<"\nMy Birth Day\n";
    break;
  case 1989:
    cout <<"\nMy First Work\n";
    break;
  case 1995:
    cout <<"\nWindows 95\n";
    break;
  case 2000:
    cout <<"\nWindows Millennium\n";
    break;
  case 2002:
    cout <<"\nCreated My vBulletin Forum\n";
    break;
  default : 
    cout << "\nNo Events in This Year\n";

  }
  return 0;
}