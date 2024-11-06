/*

    لديك دالة تقبل منك اثنان برامتر عبارة عن أرقام
    الرقم الأول هو ال بيس والثاني هو ال باور أو ال اكسبوننت
    المطلوب جعل ال دالة تطبع النتيجة مباشرة
    يجب عمل المطلوب بطريقتين

*/


#include <iostream> 
#include <cmath> 
using namespace std;

// Write Your Function Here
void thepower(int base , int power)
{
//  cout << pow(base,power) << "\n" ;


 int i = power;
int num = base;

 for (; i > 1 ; i--)
 {
  base = base * num;
 }
 cout << base;

  
}


int main()
{
  thepower(2, 5); // 32


  return 0;
}