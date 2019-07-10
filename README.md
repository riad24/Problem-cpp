# Problem c++
# Problem 1

Sorting 
One common task for computers is to sort data. For example, people might want to see all their files on a computer sorted by size. Since sorting is a simple problem with many different possible solutions, it is often used to introduce the study of algorithms.
Insertion Sort 
These challenges will cover Insertion Sort, a simple and intuitive sorting algorithm. We will first start with a nearly sorted list.
Insert element into sorted list 
Given a sorted list with an unsorted number  in the rightmost cell, can you write some simple code to insert  into the array so that it remains sorted?
Since this is a learning exercise, it won't be the most efficient way of performing the insertion. It will instead demonstrate the brute-force method in detail.
Assume you are given the array  indexed . Store the value of . Now test lower index values successively from  to  until you reach a value that is lower than ,  in this case. Each time your test fails, copy the value at the lower index to the current index and print your array. When the next lower indexed value is smaller than , insert the stored value at the current index and print the entire array.
The results of operations on the example array is:
Starting array:  
Store the value of  Do the tests and print interim results:
1 2 4 5 5
1 2 4 4 5
1 2 3 4 5
Function Description
Complete the insertionSort1 function in the editor below. It should print the interim and final arrays, each on a new line.
insertionSort1 has the following parameter(s):
•	n: an integer, the size of 
•	arr: an array of integers to sort
Input Format
The first line contains the integer , the size of the array . 
The next line contains  space-separated integers .
Constraints
 

Output Format
Print the array as a row of space-separated integers each time there is a shift or insertion.
Sample Input
5
2 4 6 8 3
Sample Output
2 4 6 8 8 
2 4 6 6 8 
2 4 4 6 8 
2 3 4 6 8 

# Problem 2
In Insertion Sort, you inserted one element into an array at its correct sorted position. Using the same approach repeatedly, can you sort an entire array?
Guideline: You already can place an element into a sorted array. How can you use that code to build up a sorted array, one element at a time? Note that in the first step, when you consider an array with just the first element, it is already sorted since there's nothing to compare it to.
In this challenge, print the array after each iteration of the insertion sort, i.e., whenever the next element has been inserted at its correct position. Since the array composed of just the first element is already sorted, begin printing after placing the second element.
For example, there are  elements in . Working from left to right, we get the following output:
3 4 7 5 6 2 1
3 4 7 5 6 2 1
3 4 5 7 6 2 1
3 4 5 6 7 2 1
2 3 4 5 6 7 1
1 2 3 4 5 6 7
Function Description
Complete the insertionSort2 function in the editor below. At each iteration, it should print the array as space-separated integers on a separate line.
insertionSort2 has the following parameter(s):
•	n: an integer representing the length of the array 
•	arr: an array of integers
Input Format
The first line contains an integer, , the size of . 
The next line contains  space-separated integers .
Constraints
 

Output Format
On each line, output the entire array at every iteration.




Sample Input
6
1 4 3 5 6 2
Sample Output
1 4 3 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 2 3 4 5 6 


# Problem 3

Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.
Function Description
Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.
aVeryBigSum has the following parameter(s):
•	ar: an array of integers .
Input Format
The first line of the input consists of an integer . 
The next line contains  space-separated integers contained in the array.
Output Format
Print the integer sum of the elements in the array.
Constraints 
 




Sample Input
5
1000000001 1000000002 1000000003 1000000004 1000000005
Output
5000000015

