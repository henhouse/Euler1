/* 
 * File:   main.cpp
 * Author: Henry Henderson
 * Solution for Euler #1
 * Created on January 26, 2015, 1:52 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int DivisibleSum(int multiple, int n)
{
    // thanks to: http://www.wikihow.com/Sum-the-Integers-from-1-to-N
    return (multiple * (n / multiple) * ((n / multiple) + 1) / 2);
}

int main(int argc, char** argv)
{
    int sum = 0;
    int n = 0;

    cout << "Please enter a number below to compute the sum of all multiples of 3 and 5 below your specified number:" << endl;
    cin >> n;

    sum = DivisibleSum(3, n) + DivisibleSum(5, n) - DivisibleSum(15, n); // 15 is where 3 and 5 cross and we must not count them twice.

//    for (int i = 1; i < n; i++)
//    {
//        if ((i % 3 == 0) || (i % 5 == 0))
//            sum += i;
//    }
    std::cout << "Sum of all multiples of 3 and 5 below " << n << ": ";
    std::cout << sum;

    return 0;
}
