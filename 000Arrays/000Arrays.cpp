#include <iostream>
using namespace std;

int main(){

    const int persons{10};          // constant for the array dimmension

    int ages[persons]{15,20,25};    // array definition and initialization

    cout << ages[7] << endl;        // this will print 0

    cout << ages[1] << endl;        // this will print 20

    ages[1]=45;

    cout << ages[1] << endl;        // this will print 45

    cin >> ages[1];                 // ask for an int

    cout << "The age is " << ages[1] << " years.\n";  // prints number introduced by console

    // BIDIMENSIONAL ARRAYS

    // One way to define a bidimensional array
    int my_matrix [4][5]={01,02,03,04,05,06,07,8,9,10,11,12,13,14,15,16,17,18,19,20};

    int my_matrix2 [4][5]={ {01,02,03,04,05},   // Another way to define a bidimensional array
                            {06,07, 8, 9,10},
                            {11,12,13,14,15},
                            {16,17,18,19,20}};

    // The way to go through the elements of the array is the same as in C language.
}