/*
ديك دالة تقوم بإنشاء عنوان موقع وتقبل منك أربعة بارامتر
الأول هو البروتوكول والثاني هو إسم الموقع والثالث هو الدومين والأخير هو هل الموقع يحتوي على
(www)
 أم لا
المطلوب بناء على البيانات أن يخرج الرابط بنفس الشكل في المثال
ال 
Argument 
الرابع إختياري وإذا لم تكتبه يقوم بوضع 
www
*/
#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string prot , string name, string domain, bool use_www=true);

int main()
{
 cout << createurl("https", "elzero", "org") ; // https://www.elzero.org
 cout << createurl("https", "google", "com", false) ; // https://google.com
 cout << createurl("http", "learn", "net") ; // http://www.learn.net
  return 0;
}

string createurl(string prot , string name, string domain, bool use_www)
{
  /*shorthand for an if-else statement.
   data type+name = condition ? value_if_true : value_if_false;
   bool is_logged_in = true;
   string message = is_logged_in ? "Welcome back!" : "Please log in.";
    cout << message << endl; // Output: Welcome back!
  */

string www = use_www? "www.":"";

return  prot + "://" + www + name + "." + domain+"\n";
}