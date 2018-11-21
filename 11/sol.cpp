/*
 Author: Daniel Woldegiorgis
 Date: 9/21/2018
 */

#include <iostream>
using namespace std;


// Factorial Trailing Zeros

long factorial(int N);
long Memo[100000000000];//Memo table for DP Factorial

int main()
{
    int current_test = 1, zeros = 0, test_cases, N;
    long fact;
    /* Uncomment To run on mulitple test cases
        cin >> test_cases;
        while(current_test <= test_cases){
        cin >> N;
     
        //Memoized Factorial
        fact = factorial(N);
     
        //calculating trailing zeros of N!
        while(fact%10 ==0) {
            zeros++;
            fact = fact/10;
        }
        cout << zeros << "\n";
        current_test++;
        cout << "\n";
    }
    */
    
    //Case for N=20
    N= 20;
    
    //Memoized Factorial
    fact = factorial(N);
    long placeholder = fact;
    cout << "The factorial of "<< N << "is: " << fact << "\n";

    //Calcualting Trailing zeros of N!
    while(fact%10==0) {
        zeros++;
        fact = fact/10;
    }
    cout << "The trailing zeros in " << placeholder << " is "<< zeros << "\n";
    return 0;
}

//Memoized Factorial
long factorial(int N){
    if (N == 0 || N == 1) {
        return 1;
    } else {
        if (Memo[N] != 0)
            return Memo[N];
        else
            return Memo[N] = (N * factorial(N - 1));
    }
}

/* Disclaimer:
 Currently works for integers N up to 20 but goes beyond limit of long numbers after that.
 */
