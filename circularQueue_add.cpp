#include <iostream>
#include <cstdio.h>
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

    void enqueue(int num)
    {
        if ((rear + 1) % size == front) // checks if the queue is full
        //in a circular queue if the modulus is equal to the front value then the queue is full
        {
            cout << "overflow\n";
        }
        else
        {
            if (rear == -1 && front == -1) // checks if is empty
            {
                rear = front = 0;
            }
            else 
            {
                rear = (rear + 1) % size;
            }
            arr_num[rear] = num; // the value from here is added to the rear of the array
            itemcount++;//it will count by adding one for each element that is added to the queue
        }
    }

    void display()
    {
        cout << "The elements of the queue are as follows\n";
        int i = front;
        do
        {
            cout << arr_num[i] << " ";
            cout << "\n";
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
         /*as long as the front is not equal to the modulus of the rear, 
        it will keep displaying the values*/
    }
    int count()
    {
        return (itemcount);
       
    }
    
};
