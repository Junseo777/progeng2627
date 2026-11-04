/*
 * 4.1 Functions: passing by copy -- Exercise: sum of powers
 * Write a program that reads from the user x and n and computes the sum of powers
 *     sum_{i=1}^{n} x^i   (= x^1 + x^2 + ... + x^n)
 * using std::pow to compute the powers, and prints the result.
 */

#include <iostream>
#include <cmath>

int main(){
    int x{};
    std::cin>>x;
    int n{};
    std::cin>>n;

    for(int i{1}; i<= n; i++){
        if(i==n){
           std::cout<<std::pow(x,i); 
        }
        else{
        std::cout<<std::pow(x,i)<< " + ";
        }
    }
    
}
