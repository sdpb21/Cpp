#include <iostream>
#include <vector>
using namespace std;

void duplicateElements( vector<int> &vec){

    for( int &val: vec){

        val*=2;

    }
}
int main(){

    vector<int> numbers = {1,2,3,4,5};

    cout << "Original values: ";

    for( int value: numbers){

        cout << value << " ";

    }

    cout << endl;

    duplicateElements(numbers);

    cout << "Values after function call: ";

    for( int value: numbers){

        cout << value << " ";

    }

    cout << endl;

}