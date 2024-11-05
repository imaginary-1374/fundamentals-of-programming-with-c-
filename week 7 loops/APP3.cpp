#include <iostream>
#include <array>
using namespace std;
int main(){

   cout << "pick 5 numbers \n";

    int nums[5];
    int input;

for (int i = 0; i < size(nums); i++)
{
    cin >> input ;
    nums[i] = input;
}

    cout<< "\n==================\n";

int rev; //reversed

for (int i = 0; i < size(nums); i++)
{
    if (true)
    {
        rev= 4-i;
    }
    cout << nums[rev] << endl;
}



    return 0;}