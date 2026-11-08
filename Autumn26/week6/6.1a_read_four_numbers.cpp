/*
 * 6.1 Exercise -- testing basic reading from text files
 * Test the program below. Then edit it so that it reads and prints also the third and fourth
 * numbers in the file.
 * input.txt (the page's example: 10 4 3 11 6, one per line) is in this folder.
 * Whitespace separation: spaces and tabs are valid separators too, equivalent to newlines, and
 * any number of them counts as one. input_whitespace.txt has the page's equivalent input --
 * change the name in open() to test that it gives the same result.
 */

#include <iostream>
#include <fstream>
// header fstream needed for working with text files

int main(){
    std::ifstream infile; 
    // we declare the object that will represent the text file
    // of type std::ifstream (infile is not a special name)

    infile.open("input.txt");
    // we associate the object called infile
    // to the text file called input.txt

    // now before we go any further it's important to check
    // whether the operation opening the file really worked
    // (if for example we misspell the name then the program
    // doesn't work and we don't know why

    // please note that difference between function open (above)
    // and function is_open (below)

    if(infile.is_open()){ 
        // if the operation was successful
        // we can read the content of the file
        // this is done in a remarkably 
        // similar way to using std::cin

        int tmp;

        infile >> tmp;
        std::cout << tmp << std::endl; 
        // this will read and then print 
        // the first number in the file
        // (which in the example above is 10)

        infile >> tmp;
        std::cout << tmp << std::endl;
        // this will read and then print 
        // the second number in the file
        // (which in the example above is 4)

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile.close(); 
        // we close the file when we are done

    }
    else{
        std::cout << "error opening file" << std::endl;
    }

}
