/* 
 * File:   main.cpp
 * Author: Henry Henderson
 * Solution for Euler #1
 * Created on January 26, 2015, 1:52 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sum = 0;
    int n = 0;

    cout << "Please enter a number below to compute the sum of all multiples of 3 and 5 below your specified number:" << endl;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
            sum += i;
    }
    std::cout << "sum of all multiples of 3 and 5 below " << n << ": ";
    std::cout << sum;

    return 0;
}
