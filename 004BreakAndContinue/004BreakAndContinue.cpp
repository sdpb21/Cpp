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

    vector<double> prices = {50, 100.0, 75, 150, 200, 300};

    double discount = 0.15;

    // Products with price under 100$ don't get discount
    for (int i = 0; i < prices.size(); i++)
    {
        if ( prices[i]<100.0 )
        {
            continue;
        }
        
        prices[i] -= prices[i]*discount;
    }
    
    for (int i = 0; i < prices.size(); i++){

        cout << "Final price from product " << (i+1) << ": " << prices[i] << "$" << endl;

    }

}