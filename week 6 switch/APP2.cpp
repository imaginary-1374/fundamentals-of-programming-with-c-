  #include <iostream>
  using namespace std;

  int main()
{
  int price = 100, dis=10, years;
  cout << "years of service\n";
  cin >> years;

  switch(years)
  {
    case 1:
      cout <<endl << 100-years*dis << " is your new price\n";
      break;
    case 2:
      cout  << 100-years*dis << " is your new price\n";
      break;
    case 3:
      cout  << 100-years*dis << " is your new price\n";
      break;
    case 4:
      cout  << 100-years*dis << " is your new price\n";
      break;
    default:
      cout << "50 is your new price";
  }
  return 0;
}