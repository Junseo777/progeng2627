/*
 * 4.1 -- Exercise: our own simplified std::pow (+ the negative-exponent extension)
 * Write mypow(base, exp) for integer exponents as repeated multiplication (a for loop).
 * Start with exp >= 0, then extend it so it also handles NEGATIVE integer exponents,
 * and add a test in main for that case. The function returns the value; it does not print.
 */

#include <iostream>

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
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "3^-5: " << mypow(3, -5) << std::endl;
    // TODO (extension): add a test with a negative exponent
}
