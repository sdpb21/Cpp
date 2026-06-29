#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> names={"Mary","Jane","Charles","Ana","Txulio","John","Joe"};

    string random_name="Ana";

    for (string n: names){

        if ( (n.compare(random_name))==0 ){

            cout << "Name found. Name: " << random_name << " found at position " << n << endl;

            break;

        }
        
    }

    cout << "We've got out of loop." << endl;

}