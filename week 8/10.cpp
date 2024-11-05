/*

    لدينا الدالة تقبل اثنان برامتر الأول عبارة عن الاراي والثاني هو عدد العناصر
    المطلوب جلب أصغر رقم موجب في ال اراي
    شاهد المثال لتفهم الفكرة

*/

#include <iostream>
using namespace std;

// Write Your Function Here
void minpositive(int nums[], int numssize);

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
 minpositive(numbers, numssize);
  return 0;
}

void minpositive(int nums[], int numssize)
{

int result = 0 ;

for (int  i = 0; i < numssize; i++)
{
    if (result > nums[i])  {result =nums[i];}

}

 cout << result;

}
