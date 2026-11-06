/*
 * 4.2.1 -- sorting two numbers
 * Complete sort_two_numbers so the two variables end up in increasing order. Use myswap
 * inside it (myswap must be defined before it; change its parameter types to double).
 * Examples:   1 2.5  ->  1 2.5        1.4 1.2  ->  1.2 1.4
 */

#include <iostream>

// function myswap to be used
// in sort_two_numbers below
// must be included here (beforehand)

void swap(double& s11, double& s22){
    double tmp{};
    tmp = s11;
    s11 = s22;
    s22 = tmp;
}

void sort_two_numbers(double& s1, double& s2){
    // complete this function
    // so that the output is as in the examples below

    // use function myswap within this function
    // (remember to change the type of the parameters to double)
    if(s1>s2){
        swap(s1,s2);
    }
}

int main(){
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;
}
