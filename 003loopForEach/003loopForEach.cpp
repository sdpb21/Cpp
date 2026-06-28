#include <iostream>
#include <vector>
using namespace std;

int main(){

    int ages [] {15,25,30,35,40};

    for(int a: ages){

        cout << a << endl;
    }

    double salaries [] {2500.56,1200.6,8650.3};

    for(auto s: salaries){  // This is useful when you don't know the object or variable type

        cout << s << endl;
    }

    string email = "john@informationpills.es";

    for(auto e: email){

        if( e == '@') cout << "@ found." << endl;
        else cout << "@ not found." << endl;
    }

    vector<int> numbers;

    int num;

    cout << "Input some numbers. Exit with 0." << endl;

    while (cin >> num && num != 0){

        numbers.push_back(num);
        
    }

    cout << "Numbers introduced:" << endl;

    for( int n: numbers){

        cout << n << endl;
        
    }
}