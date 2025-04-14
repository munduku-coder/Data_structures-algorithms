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
int pop()
{
    if (top == -1)
    {
        cout << "Underflow, Stack is empty\n";
    }
    else
    {
        int m = arr_values[top];
        top = top - 1;
        return m;
    }
}
};