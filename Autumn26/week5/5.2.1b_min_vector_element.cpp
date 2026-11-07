/*
 * 5.2.1 Exercise -- index of minimum value in a vector
 * Write a function with the interface below. It should return the index of the smallest
 * element in the vector and -1 if the vector is empty.
 * Before you even start implementing the function, write the test cases in the main.
 */

#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin)
{
    // TODO
    if(vin.size() > 0 ){
        double min{vin[0]};
        int mindex{};
        for(int i=1;i<vin.size();i++){
            if(min>vin[i]){
                min = vin[i];
                mindex = i;
            }
        }
        return mindex;
    }
    else{
        return -1;
    }
}

int main(){
    // TODO: test cases first
    std::cout<< (min_vector_element({1,2,3,4,5}) == 0?"Pass":"Fail") << "min_vector_element({1,2,3,4,5})";

}
