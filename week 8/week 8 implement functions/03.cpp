/*

    لديك مجموعة من ال دالة تقوم ببعض العمليات الحسابية البسيطة
    هناك مشكلة في عملها بسبب مكان ال دالة
    نريد حل المشكلة بدون التعديل على مكان ال دالة
    لا تقم بتعديل أي شيء من تحت سطر التعليق الخاص بالتعديل

*/


#include <iostream>
using namespace std;


int plusnums(int numone, int numtwo);

int minusnums(int numone, int numtwo);

int divnums(int numone, int numtwo);

// Do Not Edit Code Below This Line

int main()
{
  cout << plusnums(50, 60) << "\n"; // 110
  cout << minusnums(150, 50) << "\n"; // 100
  cout << divnums(100, 5) << "\n"; // 20
  return 0;
}

int plusnums(int numone, int numtwo)
{
  return numone + numtwo;
}

int minusnums(int numone, int numtwo)
{
  return numone - numtwo;
}

int divnums(int numone, int numtwo)
{
  return numone / numtwo;
}