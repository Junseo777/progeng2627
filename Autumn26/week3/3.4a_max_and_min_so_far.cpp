// 3.4 Exercise: the maximum and the minimum so far
//
// The page's "maximum so far" program keeps reading integers from the user (stops when
// the user enters 0) and every time prints the maximum value entered so far:
//
//     #include <iostream>
//
//     int main(){
//         int n, curmax;
//
//         std::cout << "please enter number:" << std::endl;
//         std::cin >> n;
//
//         curmax = n;
//         // initially the current maximum is
//         // the first number entered
//
//         std::cout << "maximum so far: " << curmax << std::endl;
//
//         while(n != 0){
//
//             std::cout << "please enter number:" << std::endl;
//             std::cin >> n;
//
//             // if the current number is greater than the current max...
//             if(n > curmax){
//                 curmax = n;
//                 // ...we update the current max
//             }
//
//             std::cout << "maximum so far: " << curmax << std::endl;
//             // we print the current maximum in any case
//             // whether or not it was updated in this iteration of the loop
//         }
//
//     }
//
// Example run of that program:
//
//     please enter number:
//     3
//     maximum so far: 3
//     please enter number:
//     6
//     maximum so far: 6
//     please enter number:
//     4
//     maximum so far: 6
//     please enter number:
//     7
//     maximum so far: 7
//     please enter number:
//     0
//     maximum so far:
//     7
//
// Extend the program above so that also the minimum at each iteration is printed.

#include <iostream>

int main(){
    int n, curmax;
    int curmin{};
    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;
    // initially the current maximum is 
    // the first number entered

    std::cout << "maximum so far: " << curmax << std::endl;
    std::cout << "minimum so far: " << curmin << std::endl;

    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        // if the current number is greater than the current max...
        if(n > curmax){
            curmax = n;
            // ...we update the current max
        }
        if(n < curmin){
            curmin = n;
        }

        std::cout << "maximum so far: " << curmax << std::endl;
    
        std::cout << "minimum so far: " << curmin << std::endl;


        // we print the current maximum in any case 
        // whether or not it was updated in this iteration of the loop
    }

}