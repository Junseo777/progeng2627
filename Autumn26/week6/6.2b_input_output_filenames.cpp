/*
 * 6.2 Exercise -- read the names of the files for the input and the output
 * Same exercise as the one above, but this time instead of reading always from "input.txt" and
 * writing always to "output.txt", we want to read from the user the name of the input and
 * output files. So the first few lines of the program will be as follows (below). Complete the
 * program.
 * When you test it, the input file name you give must be a file you created and filled
 * beforehand.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    // TODO: complete the program

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

    std::string outputfilename{};
    std::cin>>outputfilename;

    std::ofstream outfile;
    outfile.open(outputfilename);

    if(!outfile.is_open()){
        std::cout<<"error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i = v.size()-1;i>=0;i--){
        outfile << v[i]<< std::endl;
    }
    

}



