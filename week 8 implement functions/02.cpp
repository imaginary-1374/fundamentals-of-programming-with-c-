  /*
  
    لديك دالة تقوم بحساب المال الذي تحتاجه يوميا للخروج من بيتك والتنزه والتعلم
    ال دالة تقبل منك اثان براميتر
    الأول هو المرتب الذي تقبضه ونوعه فلوت والثاني هو عدد الأيام ونوعه انتجر
    لكل اسبوع من الأيام هناك يومين أجازة لن تخرج فيهم لذلك لا نحتاج فيهم مصروفات
    يجب أن يتم الاسبوع حتى تحسب يومين بدون خروج وغير ذلك تحتسب كما هي
    قم بحساب المبلغ الذي تحتاجه لكل يوم خروج من المرتب الخاص بك
    شاهد المثال لتفهم الفكرة

  */


#include <iostream>
using namespace std;

// Write Your Function Here

void money(float sal,int days) //sal=> salary
{

    
 cout << "Your daily expenses for going out are: " ;

int weeks = days/7;
 cout << sal/(days-weeks*2);
// days/=7;
// cout << sal/(days*7-days*2);
}

int main()
{
  /*
    Hints
    21 Days Has 3 "Weeks"
    Every "Week" You Have 2 Holidays.
    Total = 3 * 2 = 6 Holidays From 21 Days
  */
  money(2015, 21) ; cout<< endl; // 134.333
  money(4500, 40) ; cout<< endl; // 150
  return 0;
  }



