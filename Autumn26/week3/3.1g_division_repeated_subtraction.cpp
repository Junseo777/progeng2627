// 3.1 Exercises: division as repeated subtraction
//
// Consider the case in which we have integers a and b and we want to compute the integer
// division a / b which includes a quotient q and a remainder r such that q * b + r = a.
//
// We know that in C++ we can already compute this by using q = a / b and r = a % b.
//
// However for the sake of the exercise we want to try and do this manually as repeated
// subtraction. Consider the following example:
//
//     we want to perform the integer division of 10 by 3
//
//     10 is greater than 3 so we subtract 3 from 10 (first subtraction)
//     we get 7
//
//     7 is greater than 3 so we subtract 3 from 7 (second subtraction)
//     we get 4
//
//     4 is greater than 3 so we subtract 3 from 4 (third subtraction)
//     we get 1
//
//     1 is not greater than 3 so we terminate the loop
//
//     the quotient is the number of subtractions (3)
//     the remainder is the number we have left at the end (1)
//
// Write a program that implements this algorithm.

#include <iostream>

int main(){
    int a{};
    int b{};
    int r{};
    int q{0};
    
    std::cin>>a;
    std::cin>>b;


    while(a>b){
        a-=b;
        q+=1;
    }
    r = a;

    std::cout<<q<<'\n';
    std::cout<<r<<'\n';

   
    return 0;
}
