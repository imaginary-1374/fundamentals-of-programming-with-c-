/*

    لديك دالة تقبل منك اثنان برامتر
    الأول هو الرقم والثاني هو عدد الأرقام الكاملة المطلوب جمعها على بعضها
    المطلوب جمع الرقم نفسه + عدد الأرقام التي قبله بناء على ال برامتر الثاني
    شاهد المثال لتفهم الفكرة

*/

#include <iostream>
using namespace std;

// Write Your Function Here
void beforeresult(int Main_Number, int Numbers_Before)
{


int result = Main_Number;

for (int i = 0; i < Numbers_Before; i++)
{
  Main_Number--;

 result += Main_Number;

}
  cout << result << endl;


}


int main()
{
 beforeresult(10, 5); 
 

 // 10 + 9 + 8 + 7 + 6 + 5 = 45
  // Main Number [10]
  // Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers

  
 beforeresult(15, 3);
 
  // 15 + 14 + 13 + 12 = 54
  // Main Number [1015
  // Numbers Before [14 + 13 + 12] <- 3 Numbers

  return 0;
}