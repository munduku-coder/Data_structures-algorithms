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
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return 0;
        }
        else
        {
            return arr_values[top];
        }
    }
};