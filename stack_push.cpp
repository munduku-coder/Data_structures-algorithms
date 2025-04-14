#include <iostream>
#include <stdio.h>
#define max 6
// linked list
using namespace std;

class stack
{
private:
    int top;
    int arr_values[max];

public:
    stack()
    {

        top = -1;
    }
    void push(int value)
    {
        if (top == max - 1)
        {
            cout << "Overflow\n";
        }
        else
        {
            top = top + 1;
            arr_values[top] = value;
        }
    }
};