/*
 * 4.1 Exercises -- The maximum of two numbers
 * Write a function that takes two numbers as parameters and returns the larger.
 * The function doesn't read from the user and doesn't print: main reads the inputs,
 * passes them to the function, and prints the returned result.
 */

#include <iostream>

int max_of_two(int n1,int n2){
    int max{};
    if(n1<n2){
        max = n2;
    }
    else{
        max = n1;
    }
    return max;
}

int main(){
    // TODO: read two numbers, call the function, print the result
    int x{};
    int y{};
    std::cin>>x;
    std::cin>>y;
    std::cout<<max_of_two(x,y);
}
