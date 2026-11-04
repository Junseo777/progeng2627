/*
 * 4.1 Exercises -- The maximum of three numbers
 * Write a function with three separate parameters that returns the largest of the three
 * (no loops). The function doesn't read from the user and doesn't print. Write a main to test it.
 */

#include <iostream>

// TODO: function

int max_of_three(int n1,int n2, int n3){
    int max{};
    if(n1<n2){
        if(n2<n3){
            max = n3;
        }
        else{
            max = n2;
        }
        
    }
    else{
        if(n1<n3){
            max = n3;
        }
        else{
            max = n1;
        }
      
    }
    return max;
}

int main(){
    // TODO: read two numbers, call the function, print the result
    int x{};
    int y{};
    int z{};
    std::cin>>x;
    std::cin>>y;
    std::cin>>z;
    std::cout<<max_of_three(x,y,z);
}
