/*

    قم بعمل دالة تقبل منك اثنان براميتر عبارة عن انتجر
    في حالة كان الرقم الأول يساوي الثاني قم بجمع الرقمين
    في حالة كان الرقم الأول أكبر من الثاني قم بطرح الرقم الأول من الثاني
    في حالة كان الرقم الأول أصغر من الثاني قم بطرح الرقم الثاني من الأول
    شاهد الأمثلة لتعرف المطلوب

*/



#include <iostream>
#include <array>
using namespace std;

// Write Your Function Here

void CalcSpecial(int num_1 , int num_2)
{
if (num_1==num_2)
{
    cout << num_1 << " + " << num_2 << " = " << num_1+num_2 << endl;  
}

else if (num_1<num_2)
 {
     cout << num_2 << " - " << num_1 << " = " << num_2-num_1 << endl;  
}

 else
 {
         cout << num_1 << " - " << num_2 << " = " << num_1-num_2 << endl;  

 }
}


int main()
{
 CalcSpecial(40, 40); cout << "\n";    // First = Second -> 40 + 40 = 80
 CalcSpecial(200, 50) ; cout << "\n";   // First > Second -> 200 - 50 = 150
 CalcSpecial(100, 300) ; cout << "\n";  // First < Second -> 300 - 100 = 200
  return 0;
}