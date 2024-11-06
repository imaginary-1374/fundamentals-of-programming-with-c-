/*
    لدينا دالة تقبل منا أربعة برامتر
    الأول هو عدد التليفونات التي ستيبعها الشركة
    الثاني هو عدد التليفونات المستعملة من العدد الكلي
    الثالث هو سعر التليفون الجديد
    الرابع هو قيمة الضرايب بالنسبة المئوية التي ستدفعها الشركة فمثلا رقم 40 معناه %40
    التليفون المستعمل ثمنه أقل من الجديد ب 200
    المطلوب معرفة مكسب الشركة الكلي بعد دفع الضرايب
*/

#include <iostream>
using namespace std;

// Write Your Function Here
void pricing(int total_sold, int used_phones, int new_phones_price, int taxes);

int main()
{
  pricing(50, 10, 800, 20); // 30400
  return 0;
}

void pricing(int total_sold, int used_phones, int new_phones_price, int taxes)
{


int new_phones_profit = new_phones_price * (total_sold - used_phones);

int used_phones_profit = used_phones * (new_phones_price -200);

int total_profits=used_phones_profit + new_phones_profit;

int total_profit_after_taxes = total_profits - (total_profits*taxes/100) ;
 
cout << total_profit_after_taxes << "\n";
}