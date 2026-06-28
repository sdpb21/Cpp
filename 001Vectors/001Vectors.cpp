#include <iostream>
#include <vector>       // for vectors this library must be included
using namespace std;

int main(){
    
    //vector <int> records (5);   // Declares a vector of 5 int elements

    vector <int> records {1,2,3,4,5};   // Declares and initializes a vector of 5 int elements

    //vector <char> chars (5);   // Declares a vector of 10 char elements

    vector <char> chars {'s','g','d','k','e'};  // Declares and initializes a vector of 5 char elements

    vector <double> base_salary (350, 2125.5);  // To store 2125.5 on each vector element (350 elements)

    for (short i = 0; i < 5; i++)
    {
        cout << records[i] << endl;
    }
    
    for (short i = 0; i < 5; i++)
    {
        cout << chars[i] << endl;
    }

    int i=0;

    /* This form of loop is better because if the size of the vector changes you don't have to
        change the code of the loop. */
    while ( i<base_salary.size())
    {
        cout << base_salary[i] << endl;

        i++;
    }

    records.at(3)=105;  // The at method access the 3rd vector element and throws an exception in case of error
    /* records.at(8)=405;  /* This line throws an exception, at() method makes limits verification
                            and throws an exception in case of trying to access the wrong element. */

    cout << records.at(3);

    records.push_back(105); // push_back method adds an element at the end of the vector

    for (short i = 0; i < records.size(); i++)
    {
        cout << records.at(i) << endl;
    }
    
}