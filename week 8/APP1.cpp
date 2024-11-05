#include <iostream>
#include <cctype>
using namespace std;

int main()
{
string nameone= "ElZEro";  //needed output is: eLzeRO

int nameone_size = size(nameone);

for (int i = 0; i < nameone_size; i++)
{
    if (isupper(nameone[i]))
    {
        cout << char(tolower(nameone[i])); 
    }
    else
    {
        cout << char(toupper(nameone[i])); 
    }
    
    
}
return 0;

}