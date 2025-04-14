#include <iostream>
#include <stdio.h>
#define size 5

using namespace std;

class CircularQueue
{
private:
    int arr_num[size]; // size of the array
    int front;
    int rear;
    int itemcount; // counts how many elements that are in the array

public:
CircularQueue()
    { // constructor for the class

        front = -1;
        rear = -1;
        itemcount = 0;
    }

int dequeue()
    { 
        int x;
        if (front == -1 && rear == -1) // checks if is empty
        {
            cout << "Queue is empty\n";
            return 0;
        }
        else if (front == rear)
        {                       
            x = arr_num[front]; 
            arr_num[front] = 0;
            
            front = -1;
            rear = -1;
            itemcount--;

            return x;
        }
        else
        {
            x = arr_num[front];         
            arr_num[front] = 0;       
            front = (front + 1) % size; 
            itemcount--;

            return x;
           
        }
    }

    int count()
    {
        return (itemcount);
       
    }
};