// 3.3 Exercise: multiplication table
//
// Write a program which reads in input a number n and prints a multiplication table.
// For example:
//
//     3
//     1   2   3
//     2   4   6
//     3   6   9
//
//     5
//     1   2   3   4   5
//     2   4   6   8   10
//     3   6   9   12  15
//     4   8   12  16  20
//     5   10  15  20  25
//
// Note that you can space the number on the same row better (as in the examples above)
// if you separate them by printing the \t character instead of a space. In other words
// after you print each number just use this:
//
//     std::cout << "\t";
//
// Instead of:
//
//     std::cout << " ";

#include <iostream>

int main(){
    int n{};
    std::cin>>n;
    int row{1};
    int column{1};

    while(column<=n){
        while(row<=n){
            std::cout<<row*column;
            std::cout<<"\t";
            row++;
        }
        std::cout<<'\n';
        column++;
        row = 1;
    }

    return 0;
}
