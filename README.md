# Data-structures-and-algorithm-

## Group assignments
This repository contains a collection of C programs that solve problems using data structures and algorithms.

## 1.Summary

This project addresses Bachelor of Science in Apllied Information Technology class assignment for week one, two, and three.

## 2.Contributing

### how to contribute

 - Fork this repository,

 - Create a new feature branch,

 - Make your changes and commit,

 - Push to your branch,

 - Open a pull request.

## 3.Group memebers
1. **Munduku Innocent-012240321**
2. **Naluwu Joline Esther-012240006**
3. **Ssebunya David Francis-012240026**
4. **Ayeerwot Hope-012240399**

## 4.Assignments done

### Assignment One 

This assignment calculates the average of a student`s marks in 3 subjects and from  tests that were assessed

The source code for this assignment [student_average.c](https://github.com/munduku-coder/Data_structures-algorithms/blob/main/student_average.c)


**Output for this assignment**

![Image](Images/Screenshot%202025-03-20%20205159.png)
![Image](Images/Screenshot%202025-03-20%20205447.png)
![Image](Images/Screenshot%202025-03-20%20205630.png)
![Image](Images/Screenshot%202025-03-20%20205647.png)


### Assignment Two

This assignment a user is promted for two numbers that should be swapped. 

#### Algorithm for swapping the two numbers.

1. Start
2. Declare two integer variables m and j.
3. Prompt the user to enter values for m and j.
4. Read the input values and store them in m and j.
5. Display the values of m and j before swapping.
6. Call the swap function with the addresses of m and j.
7. Inside the swap function:
- Use a temporary variable temp to store the value of *a.
- Assign the value of *b to *a.
- Assign the value of temp to *b.

8. Display the values of m and j after swapping.
9. End.

### Pseudocode

BEGIN
FUNCTION swap(a, b)

   - DECLARE temp AS INTEGER
   - temp = VALUE AT a
   - VALUE AT a = VALUE AT b
   - VALUE AT b = temp

END FUNCTION

MAIN

    DECLARE m, j AS INTEGER

    PRINT "Please enter any number m: "

    READ m

    PRINT "Please enter any number j: "

    READ j

    PRINT "Before swap: m =", m, " j =", j

    CALL swap(ADDRESS of m, ADDRESS of j)

    PRINT "After swap: m =", m, " j =", j
END

The source code for this assignment:[swap_numbers.c](https://github.com/munduku-coder/Data_structures-algorithms/blob/main/swap_numbers.c)


**OUTPUT FOR THE SWAP CODE:**

![Images](Images/Screenshot%202025-03-20%20213638.png)

## Assignment Three

In this assignment we traverse through an array

the source code for this assignment is:[traverse_array.c](https://github.com/munduku-coder/Data_structures-algorithms/blob/main/traversing_array.c)

**THE OUPUT FOR THE TRAVERSE CODE:**

![Images](Images/Screenshot%202025-03-20%20215634.png)

## Assignment Four
**The algorithm for inserting an element in a circular queue**

step 1. if  rear modulus = front

          write overflow

          exit program

step 2: if rear&&front = -1

          set rear && front = 0

step 3:else 
          set (rear + 1)% size(size of the array)

          [end if]

step 4: set queue(rear) = num

step 5: set itemcount ++

step 6: exit program

## Assignment Five
**The algorithm for deleting an element in a circular queue**

step 1: set x value
step 2: if(front == -1 && rear == -1)
      print "queue is empty"
      exit

step 3: else if (front == rear)
     set x = Queue[front]
     set Queue[front] = 0
     front = -1
     rear = -1
     itemcount--
     return x

step 4: set x = Queue[front]
     queue[front] = 0
     front = (front + 1)% size
     itemcount--
     return x
    
step 5: Exit