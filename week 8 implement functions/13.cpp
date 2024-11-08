/*

    قم بإنشاء الدالة تقوم بالترحيب بالأشخاص
    ال الدالة تقبل إثنين برامتر وهم إسم الشخص ونوعه
    بناء على نوع الشخص تكتب له ال عنوان المناسب Mr للذكر, Miss للانثى
    إذا لم يكتب النوع لا تكتب أي عنوان قبل الإسم
    شاهد المثال لتفهم الفكرة

*/

#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name, string type ="" );
int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}

string greeting(string name, string type)
{

if (type == "Male")  {return "Hello Mr "+name;}

else if (type == "Female") {return "Hello Mrs "+name;}

else {return "Hello "+name;}

}
