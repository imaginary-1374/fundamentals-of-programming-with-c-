 #include <iostream>
 using namespace std;
  int main()
  {
  
  int n1, n2, op;

  cout << "type the first number\n";
    cin>> n1;
  
  cout << "type the second number\n";
    cin>> n2;

  cout << "choose op\n 1[+]\n 2[-]\n 3[*]\n 4[/]\n";
    cin>> op;
  

  switch(op)
  {
    case 1:
      cout << n1 + n1;
      break;
    case 2:
      cout << n1 - n1;
      break;
    case 3:
      cout << n1 * n1;
      break;
    case 4:
      cout << n1 / n1;
      break;
    default:
      cout << "not vaild op"  ;

  }





  return 0;
  }