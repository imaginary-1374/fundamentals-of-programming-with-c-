#include <iostream>
#include <array>
using namespace std;

int main(){

int G = 7; //Gussing Number
int T = 2; //Number Tries
int I;     //Input

cout << "GUESS A NUMBER\n";




    while (true)
        {

        cin >> I;

             if (I==G) {cout << "\nCORRECT"; break;}

                else {
                    cout << "\nINCORRECT YOU HAVE " <<T<< " MORE TRIES\n";
                        if (T==0) {break;}
                    } 
        T--;

        }

    return 0;
}


// best practice
// while (Tries >= 0) { // Loop continues until no tries are left
//         cin >> Input;
//         if (Input == Guess) {
//             cout << "\nCORRECT";
//             break;
//         } else {
//             cout << "\nINCORRECT. YOU HAVE " << Tries << " MORE TRIES\n";
//             if (Tries == 0) {
//                 cout << "\nNO MORE TRIES LEFT. GAME OVER.\n";
//                 break;
//             }
//         }
//         Tries--;
//     }