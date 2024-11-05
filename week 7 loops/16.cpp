#include <iostream>
using namespace std;
int main ()

{

// Friends Array
string friends[] = {"Ahmed", "Osama", "Ameer"};

for (int i = 0; i < 3; i++)
{
    int j=0;
    cout << "\n=========\n= " << friends[i] << " =\n==================\n= " ;
    while (j<5)
    {
        
        cout << friends[i][j] ;
        j++;

        
        if (j>4)
        {
            continue;
        }

        cout << ", ";
    }
    cout << " =\n==================\n";
}

return 0;

}



// // Output Needed
// =========
// = Ahmed =
// ==================
// == A, h, m, e, d =
// ==================

// =========
// = Osama =
// ==================
// == O, s, a, m, a =
// ==================

// =========
// = Ameer =
// ==================
// == A, m, e, e, r =
// ==================
/*
best practice

for (int i = 0; i < 3; i++) {
        int j = 0;
        cout << "\n=========\n= " << friends[i] << " =\n==================\n= ";
        while (j < 5) {
            if (j < friends[i].length()) {
                cout << friends[i][j];
            } else {
                cout << " ";
            }
            j++;
            if (j > 4) {
                continue;
            }
            cout << ", ";
        }
        cout << " =\n==================\n";
    }
        
*/