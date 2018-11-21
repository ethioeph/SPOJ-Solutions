/*
 Author: Daniel Woldegiorgis
 Date: 9/21/2018
 */

#include <iostream>
using namespace std;


// Prime Generator
// Input: test_cases, i, j
// Output: Prints all prime numbers between i and j

int main()
{
    int current_test = 1, test_cases, first, last;
    cin >> test_cases;
    while(current_test <= test_cases){
        cin >> first >> last;
        for(int i = first; i < last; i++) {
            bool prime = true;
            for(int j = 2; j <= i; ++j){
                if(i % j== 0){
                    prime = false;
                    break;
                }
            }
            if(prime){
                cout << i << "\n";
            }
            
        }
        current_test++;
        cout << "\n";
    }
    return 0;
}






