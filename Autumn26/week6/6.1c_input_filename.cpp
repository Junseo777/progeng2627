/*
 * 6.1 Exercise -- our intended input will probably not always be named input.txt
 * (First test the early return: change "input.txt" in infile.open("input.txt"); to a name that
 * doesn't exist and check that the program prints the error message and terminates.)
 * Edit the program below so that instead of working only with a file called input.txt, the
 * program reads from the user the name of the input text file. Create several possible input
 * files and test the program on them.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
// cstdlib header needed for EXIT_FAILURE

int main(){
    std::ifstream infile;
    std::string txt{};
    std::cin>>txt;

    infile.open(txt);

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        // ...after we print an error message
        // we use the return to terminate function main
        // with code EXIT_FAILURE that represents something going wrong

    }

    // if the return is executed above (because the program enters the if)
    // then the following lines are not executed

    // the following lines are the same as in the corresponding example above

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}
