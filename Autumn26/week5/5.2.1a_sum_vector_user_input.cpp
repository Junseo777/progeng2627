/*
 * 5.2.1 Exercise -- test passing the vector by copy with more elements
 * Edit the main in the program below. Replace the part that stores only three elements in the
 * vector. Instead, ask the user how many elements they want to enter and then read the
 * elements from the user and store them in the vector.
 */

#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    int x{};
    std::cout<<"How many elements?";
    std::cin>>x;
    for(int i=0;i<x;i++){
        std::cout<<"Enter element.";
        int element{};
        std::cin>>element;
        v.push_back(element);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}
