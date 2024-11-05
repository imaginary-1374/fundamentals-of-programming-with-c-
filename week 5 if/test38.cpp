#include <iostream>
 using namespace std;
 int main()
 {


    //APP 1=> Even Odd Checker
/*int num;
cout << "put number\n";
cin>> num;
cout << endl;
if(num % 2 ==0)
cout << num <<" is even";
else
cout <<  num << " is odd";
*/

// alternate way  
//cout << (num % 2 == 0 ?  "even" : "odd" );





//APP 2=> Find the Greatest Number
   
  /* int number_1;
   int number_2;
   int number_3;
 cout << "pick number_1\n";
  cin >> number_1;

 cout << "pick number_2\n";
  cin >> number_2;

 cout << "pick number_3\n";
  cin >> number_3;

if(number_3<number_2 && number_3<number_1)
cout << "the Greatest Number is :" << number_1 << endl;

else if (number_2<number_1 && number_2<number_3)
cout << "the Greatest Number is :" << number_2 << endl;

else  (number_1<number_2 && number_1<number_3);
cout << "the Greatest Number is :" << number_1 << endl;

*/





//APP 3=> User Rank Checker

/*
int points , rank;
cout << " Enter Your Pointes From\n 0:2000\n";
cin>>points;

rank= points / 500;

if (rank <= 500)
cout << "Your Rank Is: " << rank ;

else if (rank <= 1000 && rank > 500)
cout << "Your Rank Is: " << rank ;


else if (rank <= 1500 && rank > 1000)
cout << "Your Rank Is: " << rank ;


else 
cout << "Your Rank Is: " << rank ;
*/




//APP 4=> Simple Calculator

int num_1 , num_2 , op;

cout << "num_1\n";
cin >> num_1;

cout << "choose op\n1.+\n2.-\n3.*\n4./\n";
cin >> op;

cout << "num_2\n";
cin >> num_2;


if (op == 1 )
cout << num_1 + num_2;

else if (op == 2)
cout << num_1 - num_2;

else if (op == 3)
cout << num_1 * num_2;

else if (op == 4)
cout << num_1 / num_2;

else
cout << "error";


return 0;
    
 }
