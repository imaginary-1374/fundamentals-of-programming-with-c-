/*

    لدينا دالة تقوم بعمل اكثر من عملية حسابية
    العمليات الحسابية هي الجمع والطرح والضرب
    ال دالة تقبل ثلاثة بارامتر الرقم الأول والرقم الثاني ونوع العملية الحسابية
    كل ما عليك هو تنفيذ العملية الحسابية بناء على المدخلات
    في حالة قام الشخص بكتابة نوع العملية الحسابية خطأ يرجع من ال دالة رقم 0
    العمليات الحسابية المتاحة هي جمع, طرح, ضرب
    مكن للشخص كتابة أول حرف فقط من إسم العملية الحسابية فمثلا للطرح يمكن أن يكتب ط
    إذا لم يكتب الشخص العملية الحسابية نهائيا قم بعمل العملية الإفتراضية وهي الجمع

*/

#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int n1, int n2, string op ="add");

int main()
{
  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
  return 0;
}

int calculate(int n1, int n2, string op){

if (op=="add" || op=="a")      {return n1+n2 ;}

else if (op=="subtract" || op=="s")      {return n1-n2 ;}

else if (op=="multiply" || op=="m")      {return n1*n2 ;}

else      return 0;

}


/*
================
==copilot code== 
================
int calculate(int n1, int n2, string op) {

// Convert the operation string to a character

char operation = op.empty() ? 'a' : op[0];

switch (operation){ 

case 'a':
case 'A':
return n1 + n2;
   
case 's':
case 'S':
return n1 - n2;

case 'm':
case 'M':
return n1 * n2;

default:
return 0;
        }
}

*/



