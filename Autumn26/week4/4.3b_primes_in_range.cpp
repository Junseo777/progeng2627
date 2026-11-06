/*
 * 4.3 -- Primes in a range
 * Using smallest_factor (copy it in from 4.3a), read two integers (both > 1, second > first)
 * and print every prime in that range, both ends included.
 * Examples:   25 40 -> 29 31 37      25 41 -> 29 31 37 41      8 10 -> (nothing)
 */

#include <iostream>

// TODO: paste smallest_factor from 4.3a here
int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...
                return cf;
            //...it means we have found a factor!
        }

    }
    return 0;
}

int main(){
    // TODO
    int n1,n2;
    std::cin>>n1>>n2;
    while(n1<n2){
        if(smallest_factor(n1) == 0){
            std::cout<<n1<<'\n';
        }
        n1++;
    }
}
