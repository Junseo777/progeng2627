/*
 * 5.2.2 Exercise -- appending vectors
 * Write a function with the interface below. It takes in input vectors vin1 and vin2 and
 * provides in output (using passing by reference) vector vout containing the values of all the
 * elements contained in vin1 followed by the values of all the elements contained in vin2.
 * For example if vin1 contains 1 7 3 4 and vin2 contains 2 -2 19 then vout should contain
 * 1 7 3 4 2 -2 19.
 * Write a main to test the function.
 */

#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout)
{
    // TODO
    for(int i=0;i<vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    for(int i=0;i<vin1.size();i++){
        vout.push_back(vin2[i]);
    }

}

int main(){
    // TODO
    std::vector<int> v;
    append_vectors({1,2,3,4},{5,6,7,8},v);
    for(int i=0;i<v.size();i++){
        std::cout<<v[i];
    }
    
}
