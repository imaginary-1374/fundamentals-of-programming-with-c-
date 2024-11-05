/*
    لدينا دالة تقبل مننا ثلاثة برامتر
    الأول هو اراي والثاني هو عدد عناصر ال اراي والثالث الرقم الذي سوف نستثنيه من العملية الحسابية
    المطلوب جمع الأرقام كلها وإستثناء الرقم في ال برامتر الأخير
    شاهد المثال لترى الفكرة
*/

#include <iostream>
using namespace std;

// Write Your Function Here
void sumall(int nums[], int numssize, int excep);
int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  sumall(numbers, numssize, noneed);
  return 0;
}


void sumall(int nums[], int numssize, int excep)
{
int result =0;

for (int i = 0; i < numssize; i++)
{
if (nums[i]==excep) {continue;}

    result +=nums[i];
}

cout << result;


}