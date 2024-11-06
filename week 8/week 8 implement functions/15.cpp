/*
    لدينا دالة تقبل منا اثنان برامتر
    الأول عبارة عن ارراي من الارقام والأرقام هي المبالغ الذي يحصل عليها الشخص كل يوم والثاني هو عدد عناصر ال ارراي
    بمعنى مثلا لو ال ارراي فيها 10 عناصر معناها أن الشخص عمل لمدة 10 أيام وكل رقم هو الراتب الخاص باليوم
    المطلوب معرفة معدل الراتب الذي يأخذه الشخص يوميا
*/

#include <iostream>
using namespace std;

// Write Your Functions Here
double avg(int nums[], int numssize);

int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}

double avg(int nums[], int numssize)
{
   double result =0;
   
   for (int i = 0; i < numssize; i++)
   {
    result += nums[i];
   }
   
   
    return result/numssize;
}

/*
Float vs. Double

Precision:
==========
Float: 32-bit floating-point number. Provides approximately 7 decimal digits of precision.

Double: 64-bit floating-point number. Provides approximately 15 decimal digits of precision.
=====================================================================================================
Memory Usage:
=============
Float: Uses 4 bytes of memory.

Double: Uses 8 bytes of memory.
=====================================================================================================
Performance:
============
Float: Generally faster on systems where floating-point calculations are optimized for 32-bit numbers.

Double: May be slower in some systems, but it depends on the hardware and compiler optimizations.
===================================================================
When to Use Each
================
Use float:
==========
When memory usage is a concern.

When you need to handle a large array of floating-point numbers.

When the precision of 7 decimal digits is sufficient.
=====================================================================================================
Use double:
===========
When you need higher precision for calculations.

When dealing with very large or very small numbers.

When the precision of 15 decimal digits is required.
=====================================================================================================
Summary
=======
Use float if memory is a constraint and the precision of 7 decimal digits is enough.
=====================================================================================================
Use double if you need more precision and memory isn't a concern.
*/