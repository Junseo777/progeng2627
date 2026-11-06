/*
 * 4.2.2 Functions: passing by reference (2) -- Perimeter and area
 * Write a function that takes the lengths of two (non-parallel) sides of a rectangle and
 * provides BOTH its perimeter and area through output parameters. No reading or printing
 * in the function. Write a main to test it.
 */

#include <iostream>

void PandA(double a, double b, double& P, double& A){
    P = a+b;
    A = a*b;

}

int main(){
    // TODO: test the function
    double a,b;
    double P{};
    double A{};
    std::cin>>a>>b;
    PandA(a,b,P,A);
    std::cout<<P<<'\n'<<A;


}
