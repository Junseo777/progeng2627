/*
 * 6.2 Exercise -- read the content of a text file and print it on another file in reversed order
 * Complete the following program which reads the content of a text file, stores it in a vector
 * and prints it on another text file in reversed order.
 * (If the output file is blank or incomplete, check you call close() on the ofstream as soon
 * as you are done writing.)
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

    infile.close(); 

    // TODO: print the content of v in reversed order
    // onto a different text file

    std::ofstream outfile;
    outfile.open("output.txt");

    if(!outfile.is_open()){
        std::cout<<"error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i = v.size()-1;i>=0;i--){
        outfile << v[i]<< std::endl;
    }
    

}
