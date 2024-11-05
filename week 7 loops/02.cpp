#include <iostream>
using namespace std;

int main()
{

string products[] = {"item 1","item 2","item 3"};

string sizes[] = {"small","large","x-large"};

int i;

  for(i=0;i<3;i++)
  {
    cout << "product name:\n";
    cout << products[i] << "\n" ;
    cout << "sizes:\n" ;
  for(int j=0 ; j<3;j++)
  {
    cout << sizes[j];
    if(j<2)
    {
      cout << ", ";
    }
  }
    cout << "\n=====================\n" ;
  }
    return 0;
}