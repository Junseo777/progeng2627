/*
 * 6.4 Exercise -- text file printer
 * Write a program which accepts one command line argument representing a text file (or a .cpp
 * file, which is a form of text file) and prints its content on the screen.
 * (argc is the number of command line arguments, argv the arguments; argv[0] is always the name
 * of the executable.)
 */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]){
    if(argc!=2){
        std::cout<<"input one text file!" <<'\n';
        return EXIT_FAILURE;
    }
    std::ifstream infile;
    infile.open(argv[1]);
    if(!infile.is_open()){
        std::cout<<"error!"<<'\n';
        return EXIT_FAILURE;
    }

    std::string line{};
    while(std::getline(infile,line)){
        std::cout<<line<<'\n';
    }
    
}
