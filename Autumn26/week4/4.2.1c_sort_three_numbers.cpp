/*
 * 4.2.1 -- sorting three numbers
 * Extension of 4.2.1b, now with
 *     void sort_three_numbers(double& s1, double& s2, double& s3)
 * Do not alter function myswap. Write a main to test the function.
 */

#include <iostream>

void swap(double& s11, double& s22){
    double tmp{};
    tmp = s11;
    s11 = s22;
    s22 = tmp;
}

void sort_three_numbers(double& s1, double& s2, double& s3){
    if(s1>s2){
        swap(s1,s2);
        if (s1>s3){
            swap(s1,s3);
                if (s2>s3){
                    swap(s2,s3);
                }
        }
    }
    else{
        if(s2>s3){
            swap(s2,s3);
        }
    }
}

int main(){
    double n1{};
    double n2{};
    double n3{};
    std::cin>>n1>>n2>>n3;
    sort_three_numbers(n1,n2,n3);
    std::cout<<n1<<" " <<n2<< " " <<n3;
}
