#include <cmath>
#include <iostream>
using namespace std;


bool isPrime(int num){
    if (num <= 2 || num % 2 == 0) return num==2;

    for(int factor = 3; factor<sqrt(num)+ 1; factor = factor + 2){
        if (num%factor == 0) return false;
    }
    return true;
}


int main()
{

    return 0;
}