// 3.2 Exercise: x^n using a for loop
//
// Write a program that computes x^n (with n integer >= 0) as repeated multiplications
// by using a for loop.

#include <iostream>

int main(){
    int x{};
    int n{};
    int acc{1};
    std::cin>>x;
    std::cin>>n;
    for(int i = 0; i<n;i++){
        acc *= x;
    }
    std::cout<<acc;

    return 0;
}
