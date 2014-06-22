//
//  main.cpp
//  project5
//
//  Created by Nicholas Messina on 6/17/14.
//  Copyright (c) 2014 Nicholas Messina. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int counter = 1;
    int number = 10;
    int remainder = 0;
    
    while (counter <= 20)
    {
        remainder = number/counter;
        if(number%counter > 0)
        {
            counter = 1;
            number = number + 10;
        }
        if(number%counter == 0)
        {
            counter++;
        }
        if (counter == 20)
        {
            cout << number << endl;
        }
    }
    return 0;
}
