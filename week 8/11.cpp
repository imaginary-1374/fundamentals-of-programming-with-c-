/*
لدينا دالة تقبل اثنان برامتر الأول عبارة عن ارراي والثاني هو عدد العناصر
المطلوب جلب أكبر رقم سالب في ال ارراي
ملحوظة كلما اقتربت من الصفر يكون الرقم السالب أكبر بمعنى
-10
أكبر من
-500
أول عنصر في ال Array لن يتغير نهائيا
شاهد المثال لتفهم الفكرة
*/


#include <iostream>
using namespace std;
// Write Your Function Here
void firstnegative(int nums[], int numssize);


int main()
{
  int numbers[] = { -10, -20, 15, -100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize = size(numbers);
  firstnegative(numbers, numssize);
  return 0;
}

void firstnegative(int nums[], int numssize)
{

// Start with a value that any negative number will be greater than

int result = INT_MIN ;

for (int  i = 0; i < numssize; i++)
{
    if (result < nums[i] && nums[i]<0)  {result =nums[i];}
}


if (result == INT_MIN) 
{ cout << "No negative numbers found" << endl; }

 else { cout << result << endl; }

}