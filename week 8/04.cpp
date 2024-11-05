/*

    لديك دالة تحتوي على ثلاثة براميتر عبارة عن أرقام
    ال الدالة تقوم بجمع هذه الأرقام مع بعضها
    شاهد إستخدام ال الدالة والنتيجة التي تخرج منها ولا تقوم بالتعديل على الكود الخاص بالتشغيل
    قم بإنشاء ال الدالة ليعمل ال الكود بنجاح وتخرج القيم كما في المثال



*/




#include <iostream>
using namespace std;

// Write Your Function Here
int calculation(int a, int b=50, int c=150)
{
  
cout << a+b+c;
return a+b+c; 
}

int main()
{
 calculation(50, 100, 150) ; // 300
 calculation(100, 50) ; // 300
 calculation(100) ; // 300
 
  return 0;
}