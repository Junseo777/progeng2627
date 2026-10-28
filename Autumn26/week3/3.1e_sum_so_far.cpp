// 3.1 Exercises: the sum so far
//
// Write a program that keeps reading integers from the users (stopping when the user
// enters 0) and after each number read prints what's the sum of the numbers at that
// point. For example:
//
//     enter a number:
//     3
//     the sum so far is:
//     3
//     enter a number:
//     5
//     the sum so far is:
//     8
//     enter a number:
//     -1
//     the sum so far is:
//     7
//     enter a number: 2
//     the sum so far is:
//     9
//     enter a number: 0

#include <iostream>

int main(){
    int x{};
    int sum{};
    std::cin>>x;

    while(x!=0){
        sum +=x;
        std::cout<<"The sum so far is "<<sum<<'\n';
        std::cin>>x;

    }
   
    return 0;
}
