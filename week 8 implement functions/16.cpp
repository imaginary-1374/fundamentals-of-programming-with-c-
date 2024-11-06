/*
    لدينا دالة تقبل منا أربعة بارمتر
    الأول هو الكتب الصغيرة وهي تحتاج لمساحتين في الرف
    الثاني هو الكتب المتوسطة وهي تحتاج لأربع مساحات في الرف
    الثالث هو الكتب الكبيرة وهي تحتاج لست مساحات في الرف
    الرابع هو الرفوف وكل رف يحتوي على 20 مساحة
    المطلوب توزيع الكتب على الرفوف ومعرفة كم عدد المساحات المتبقية
    إذا كان عدد المساحات الخاصة بالكتب أكبر من المساحات الموجودة في الرفوف نقوم بإرجاع رقم 0
*/
#include <iostream>
using namespace std;

// Write Your Function Here
int books(int tiny, int med, int big, int n);

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}

int books(int tiny, int med, int big, int n)
{

//tiny==>2
//mid==>4
//big==>6
//n==>20

int tiny_space= tiny *2;
int med_space= med*4;
int big_space= big*6;


int books_space =tiny_space + med_space + big_space;

int remaining_space = n * 20 - books_space;

if (remaining_space < 0)    {return 0;}

else    {return remaining_space;}



}