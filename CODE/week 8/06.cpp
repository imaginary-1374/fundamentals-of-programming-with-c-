
    // لدينا دالة تقوم بعمل تبديل للحروف إذا كان الحرف كبير نقوم بتحويله ل صغير والعكس
    // إذا كانت الكلمة تحتوي على حرف كبير نقوم بتركه كما هو ولا نقوم بتحويله




#include <iostream>
using namespace std;

// Write Your Function Here
void swapping(string text , int size_phrase = 5)
{

   size_phrase = size(text);

for (int i = 0; i < size_phrase; i++)
{
    if ( isupper(text[i]))
    {
        cout << char(text[i]);
    }
    else 
    {
        cout << char(toupper(text[i]));
    }
   
    
}


}


int main()
{

 swapping("hero Of THe PROgramming"); // HERO OF THE PROGRAMMING
  return 0;
}