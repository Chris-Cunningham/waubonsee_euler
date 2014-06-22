//
//  main.cpp
//  problem_6
//
//  Created by Nicholas Messina on 6/17/14.
//  Copyright (c) 2014 Nicholas Messina. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sum;
    int square;
    int total;
    for(int i = 1; i <= 100; i++)
    {
        sum = sum + (i*i);
        square = square + i;
    }
    total = (square * square) - sum;
    cout << total << endl; 
}


