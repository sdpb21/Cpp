#include <iostream>
using namespace std;

int main(){
    
    int num {};

    cout << "Introduce an integer number: ";

    cin >> num;

    cout << num << " es " << ((num % 2 == 0)? "par": "impar") << endl;
}