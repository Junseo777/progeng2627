/*
 * 4.2.2 -- Integer division
 * Write a function that takes two integers a and b and provides, through output parameters,
 * both the integer quotient of a / b and the remainder. No input checks needed (e.g. b = 0).
 * No reading or printing in the function. Write a main to test it.
 */

#include <iostream>

void intdiv(int a, int b, int& res, int& r){
    res = a/b;
    r = a%b;
}

int main(){
    // TODO: test the function
    int a,b;
    std::cin>>a>>b;
    int res,r;
    intdiv(a,b,res,r);
    std::cout<<res<<'\n'<<r;


}
