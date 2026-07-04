#include <iostream>
using namespace std;

int main(){

    // Pointers to constants

    const int age = 30;         // Constant

    const int salary = 2500;    // Another constant

    const int *ptr = &age;      /* age address to pointer (const int means a const int pointer type
                                   not a constant pointer.) */
    //*ptr = 20;                /* This line results in a compilation error. Pointer stores a */
                                /* constant address. */
    ptr = &salary;              // Now pointer points to constant salary

    cout << *ptr << endl;       // Prints salary

    // Constant pointers

    int age2 = 45;

    int salary2 = 2500;

    int* const ptr2 = &age2;    /* Constant pointer must be defined and initialized in the same 
                                   line. */
    *ptr2 = 39;                 // The value stored in address that a constant pointer points to
                                // can be changed.
    /*ptr2 = &salary2;           // This line results in a compilation error. Address stored in a
                                   constant pointer can't be changed. */
    cout << *ptr2 << endl;

    // Constant pointers that points to constants

    const int age3 = 68;            // Constant

    int salary3 = 2548;             // Variable

    //const int* const ptr3 = &age3;  // Constant pointer that points to a constant

    const int* const ptr3 = &salary3;

    /* *ptr3 = 5843;                   /* This line results in a compilation error. The value stored
                                       in the pointed address can't be modified. */
    /* ptr3 = &age3;                   /* This line results in a compilation error. Address stored in
                                       a constant pointer can't be changed. */

    cout << *ptr3 << endl;
    
}