/*
 * 6.1 Exercise -- print the content of a text file with words in reversed order
 * Edit the code from the exercise above so that it works with input text files containing not
 * just numbers but any text (therefore words).
 * Example input (input_words.txt -- change the name in open()):  The quick brown fox jumps  ->
 * should print jumps, fox, brown, quick, The (one per line).
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile; 
    infile.open("words.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    // TODO: print the content of v in reversed order
    for(int i = v.size()-1;i>=0;i--){
        std::cout << v[i]<< std::endl;
    }

}
