/*
 * 6.3 Exercise -- merging
 * merge_vectors_int takes in input two vectors of int which are already sorted and provides in
 * output a merged vector.
 * Write the implementation for the function and add several more test cases to the main. The
 * implementation must take advantage of the fact that the inputs are already sorted. Do not
 * write a function that just puts the vectors one after the other and then sorts the combined
 * vector.
 */

#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    // TODO
    int i = 0;
    int j = 0;
    while(i<v1.size()&&j<v2.size()){
        if (v1[i]>v2[j]){
            merged.push_back(v2[j]);
            j++;
        }
        else{
            merged.push_back(v1[i]);
            i++;
        }
    }
    if(i>=v1.size()){
        for(;j<v2.size();j++){
            merged.push_back(v2[j]);
        }
    }
    else{
        for(;i<v1.size();i++){
            merged.push_back(v1[i]);
        }
    }
}


int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}
