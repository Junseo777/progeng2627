/*
 * 6.1 Exercise -- print the content of a text file in reversed order
 * Complete the following program which reads the content of a text file containing numbers,
 * stores it in a vector and prints it in reversed order.
 * Example input (input_whitespace.txt):  10 4 3 11 6  ->  should print 6, 11, 3, 4, 10 (one
 * per line).
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }
    for(int i = v.size()-1;i>=0;i--){
        std::cout << v[i]<< std::endl;
    }

    infile.close(); 

    // TODO: print the content of v in reversed order

}
