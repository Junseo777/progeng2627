/*
 * 5.2.2 Exercise -- filtering values
 * Write a function with the interface below. It takes in input a vector vin and a numerical
 * value t and provides in output (using passing by reference) a vector vout containing all the
 * values in vin that are less than t.
 * Write a main to test the function.
 */

#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout)
{
    // TODO
    for(int i=0; i<vin.size();i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    // TODO
    std::vector<double> v;
    filter_v({1,2,3,4},3,v);
    for(int i=0;i<v.size();i++){
        std::cout<<v[i];
    }
}
