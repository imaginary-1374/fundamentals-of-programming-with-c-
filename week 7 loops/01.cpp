#include <iostream>
using namespace std;

int main()
{
 
 int nums[] = {100,200,300,400,500,600};

  int nums_size= sizeof(nums) / sizeof(nums[0]);


 for (int i=0 ; i< nums_size; i+=2)
{
    cout << nums[i] << "\n" ;
}

// output =>100,300,500
// ===============================================

 for (int i=0  ; i< nums_size; i++) 
{
    cout << nums[i] << "\n" ;
    i++;
}

// output =>100,300,500
// ===============================================

for (int i=nums_size-1 ; i> 1; i--) //nums_size-1 == i=5
{
    cout << nums[i] << "\n" ;
}

// output =>600,500,400,300
// ===============================================

for (int i=nums_size-1 ; i> 1; i--) //nums_size-1 == i=5
{
    cout << nums[i] << "\n" ;
}

// output =>600,500,400,300
// ===============================================

int i =nums_size-1;

for (;;) //nums_size-1 == i=5
{
    if(i>1)
    {
    cout << nums[i] << "\n" ;
    i--;
    }
}


// output =>600,500,400,300
// ===============================================


    return 0;
}