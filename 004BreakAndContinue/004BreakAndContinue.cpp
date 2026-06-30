#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> names={"Mary","Jane","Charles","Ana","Txulio","John","Joe"};

    string random_name="Txulio";

    for ( int i=0; i<names.size(); i++){
    //for (string n: names){

        if ( names[i] == random_name ){
        //if ( (n.compare(random_name))==0 ){

            cout << "Name found. Name: " << random_name << " found at position " << i << endl;
            //cout << "Name found. Name: " << random_name << " found at position " << n << endl;

            break;

        }
        
    }

    cout << "We've got out of loop." << endl;

}