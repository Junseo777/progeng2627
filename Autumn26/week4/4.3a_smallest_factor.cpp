/*
 * 4.3 Functions: early return -- Smallest factor
 * Write   int smallest_factor(int n)
 * For n > 1: return the smallest prime factor of n if n is not prime, or 0 if n is prime.
 * Use EARLY RETURN: return the factor as soon as it's found inside the loop
 * (instead of setting a found_factor flag); return 0 at the end. Write a main to test it.
 * The loop from the earlier section, for reference:
 *     for(int cf = 2; cf < n; cf++){
 *         if( (n % cf) == 0){ // n can be divided by cf...
 *             found_factor = true;
 *             //...it means we have found a factor!
 *         }
 *     }
 */

#include <iostream>

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
    int n{};
    std::cin>>n;
    std::cout<<smallest_factor(n);
}
