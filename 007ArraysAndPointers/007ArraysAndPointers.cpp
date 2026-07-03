#include <iostream>
using namespace std;

int main(){

    int numbers[] = {10,20,30};     // Defines an array

    cout << numbers << endl;        // Prints the first element array's address

    cout << *numbers << endl;       // Prints the first element of the array numbers

    int *ptr_numbers {numbers};     /* Declares an int pointer and initializes it with the array's
                                       number first element address. */
    cout << ptr_numbers << endl;    // Prints the first element array's address

    cout << *ptr_numbers << endl;   // Prints the first element of the array numbers via pointer.
    
}