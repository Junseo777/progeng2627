// 3.2 Exercise: factorial
//
// The factorial of n (n!) in general can be computed as n * (n - 1) * (n - 2)... * 2 * 1.
// For example: 5! = 5 * 4 * 3 * 2 * 1 = 120, 2! = 2, etc. Also 0! is defined and 0! = 1.
//
// Write a program that reads a number from the user and prints its factorial.

#include <iostream>

int main(){
    int input{};
    std::cin>>input;
    int f{input};
    for(int n{input-1}; n>0; n--){
        f *= n;

    }
    std::cout<<f;

    return 0;
}
