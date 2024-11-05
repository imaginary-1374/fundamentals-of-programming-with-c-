/*

    لديك دالة تقبل منك ارراي من الأرقام و عدد الأرقام
    قم بجمع جميع الأرقام الزوجية مع بعضها وقم بتخزين الناتج في الرقم الأول
    قم بضرب جميع الأرقام الفردية وقم بتخزين الناتج في الرقم الثاني
    قم بجمع الرقم الأول مع الثاني
    شاهد المثال لترى الفكرة

*/

#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int nums[], int elem);


int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}


int plusandmultiply(int nums[], int elem)
{
int even_result=0;

int odd_result=1;


for (int i = 0; i < elem; i++)
{

    if (nums[i]%2 == 0)   even_result += nums[i];

    else     odd_result *= nums[i];

}

return odd_result + even_result;

}