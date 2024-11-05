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
// Start with a high value for result
int result = INT_MAX ;

for (int  i = 0; i < numssize; i++)
{
  // Find the smallest positive number
    if (result > nums[i] && nums[i]>0)  {result =nums[i];}


}

    if (result == INT_MAX) 

    {cout << "No positive numbers found" << endl;}

     else {cout << result << endl;}
 

}
