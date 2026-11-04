/*
 * 4.1 Exercises -- Sum of powers as a function
 * Write a function taking x and n as parameters that returns  sum_{i=1}^{n} x^i
 * (i.e. x^1 + x^2 + ... + x^n). It must call your own mypow (copy it in from 4.1b)
 * to compute each power. The function doesn't read from the user and doesn't print.
 * Write a main to test it.
 */

#include <iostream>
#include <string>

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

// TODO: sum of powers function
double sum_of_powers(int x,int n){
   double result{};
    for(int i{1}; i<= n; i++){
        result += mypow(x,i); 
        }
    return result;
    
}
    

int main(){
    // TODO: test the function
    std::cout<<sum_of_powers(3,2);
}
