#include <iostream>
#include <cstdio.h>
#define size 5

using namespace std;
/*the modulus keeps the circular queue in sync(it adds to the front after dequing so that values can be continuosly
added front the front since deletion is done at the front)
in the dequeue function the front is the one modulusly added
in the enqueue function the rear is the one that is modulusly added
as long as the circular queue is not full, values will be added from the rear((rear= rear +1)% size ==front)
as long as its not that the rare will be added and also after dequeing,
a value can be added from the rear as long the modulus not equal to the front*/

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

int main()
{
    CircularQueue Q; // q is an object of the class
    int value;

    Q.enqueue(1);
    Q.enqueue(3);
    Q.enqueue(5);
    Q.enqueue(6);
    Q.enqueue(7);

    value = Q.count();
    cout << "The elements in the array are:" << value << "\n";

    Q.dequeue();
    Q.dequeue();

    value = Q.count();
    cout << "The elements in the array are:" << value << "\n";

    Q.display();

    Q.enqueue(12);
    Q.enqueue(9);

    Q.display();
    return 0;
}