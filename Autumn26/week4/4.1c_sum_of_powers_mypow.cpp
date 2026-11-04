/*
 * 4.1 -- Exercise: sum of powers with mypow
 * Write a version of the sum of powers program (4.1a: read x and n, print sum_{i=1}^{n} x^i)
 * that uses the function mypow you implemented (4.1b) instead of std::pow.
 */

#include <iostream>

// TODO: paste mypow from 4.1b here
double mypow(double base, int exp){
    double result{1};
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    bool sign{false};
    if(exp<0){
        sign = true;
    }
    int uexp{std::abs(exp)};

    for(int i{0};i<uexp;i++){
        result = result*base;
    }

    // TODO: use a for loop to implement the repeated multiplication algorithm
    // so that at the end of the loop variable result contains base^exp

    if(sign==true){
        result = 1/result;
    }

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int main(){
    int x{};
    std::cin>>x;
    int n{};
    std::cin>>n;

    for(int i{1}; i<= n; i++){
        if(i==n){
           std::cout<<mypow(x,i); 
        }
        else{
        std::cout<<mypow(x,i)<< " + ";
        }
    }
    
}
