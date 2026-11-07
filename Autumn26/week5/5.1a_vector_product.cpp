/*
 * 5.1 Exercise -- basic vector operations
 * Write a program that declares a vector of numbers. Using function push_back store in the
 * vector a few elements. Print the result of first element * (second element + third element).
 */

#include <iostream>
#include <vector>

int main(){
    // TODOs
    std::vector<int> vn;
    vn.push_back(5);
    vn.push_back(6);
    vn.push_back(7);
    std::cout<<vn[0]*(vn[1]+vn[2]);
}
