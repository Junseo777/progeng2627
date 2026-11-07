/*
 * 5.2.1 Exercise -- search a value in a vector
 * Write a function with the interface below. It should check if the vector contains an element
 * with value n and return the index of (the first occurrence of) the element if it is found
 * (remember that you can use an early return in this case) and -1 if not.
 * (There is already a function in the standard library performing this task but don't use it
 * for this exercise because it would defeat the purpose.)
 * Before you even start implementing the function, write the test cases in the main.
 */

#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin)
{
    // TODO
    for(int i=0;i<vin.size();i++){
        if (vin[i]==n) {
            return i;
        }
    }
    return -1;
}

int main(){
    // TODO: test cases first
    std::cout<<(search_vector(4,{1,2,3,4,5})==3?"Pass":"Fail");
}
