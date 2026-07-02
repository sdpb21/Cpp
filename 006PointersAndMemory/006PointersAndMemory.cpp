#include <iostream>
using namespace std;

int main(){

    int * int_ptr {nullptr};

    int_ptr = new int;          // Assingn memory address in the heap to the pointer

    cout << int_ptr << endl;    // Prints the address in the heap that pointer is pointing to

    cout << &int_ptr << endl;   // Prints the address of the pointer variable in the stack

    int * int_ptr2 = new int;   // Defines a pointer variable and assingn memory address in the heap

    *int_ptr2 = 10;             // Stores 10 in address pointed by int_ptr2

    cout << "Value before delete: " << *int_ptr2 << endl;   // Prints 10

    delete int_ptr2;            // Liberates memory

    cout << int_ptr2 << endl;   // Address in int_ptr2 still there

    cout << "Value after delete: " << *int_ptr2 << endl;

    int_ptr2 = nullptr;         // Good practice after a call to delete

    cout << int_ptr2 << endl;

    //cout << "Value after delete again: " << *int_ptr2 << endl;    // This lines throws an exception

}