#include <iostream>
#include <cctype>
using namespace std;
int main()
{
string name= "EL  Z E RO";
int namesize = size(name);

for (int i = 0; i < namesize; i++)
{
    if (isspace(name[i])==0)
    {
        cout<< name[i];
    }
    
    // if (isspace(name[i]))
    // {
    //     continue;
    // }
}


    return 0;
}