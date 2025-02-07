/**
 * @file main.cpp
 * @author Mason Enochs
 * @date 2025-02-03
 * @brief This program utilizes and tests the custom vector class
 * 
 * This program will test the vector class
 */


#include "Vector.h"
#include <iostream>

using namespace std;


/**
 * This test uses a loop to test the functionality of the push_back method adding 1500 integers. It then outputs the first 50 and the last 50 integers to show that it works across the entire vector.
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void testPushBack();


/**
 * This test uses the [] operator to access and change an element in the vector. It then outputs the original array and the modified array to show that it works. 
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void testBrackets();


/**
 * This test uses the size method to bound a loop to output the contents of an array
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void testSize();


/**
 * This test makes a vector and gives it values, then it makes a new vector and assigned the old vector to this new vector and outputs both of their contents to make sure they are the same
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void testAssignment();


/**
 * This test uses the copy constructor to copy over data from one vector to another. It then outputs the contents of both to make sure they are the same.
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void testCopy();

int main() {
  // execute first test
  cout << "Test 1: Push Back " << endl << endl;
  testPushBack();

  // execute second test
  cout << "Test 2: Brackets " << endl << endl;
  testBrackets();

  // execute third test
  cout << "Test 3: Size " << endl << endl;
  testSize();

  // execute fourth test
  cout << "Test 4: Assignment" << endl << endl;
  testAssignment();

  // execute fifth test
  cout << "Test 5: Copy " << endl << endl;
  testCopy();
  
  return 0;
}

void testCopy()
{
  // Makes an initial vector and populates it with 5 values and outputs its contents
  cout << "Here I make vec1 and print its contents. Then, I copy vec1 to vec2 and print out its contents" << endl;
  Vector vec1;
  for(int i = 0; i < 5; i++)
    {
      vec1.push_back(i*5);
      cout << vec1[i] << " ";
    }
  cout << endl;

  // makes a second vector using the copy constructor to get the data from the first vector then outputs its contents.
  Vector vec2(vec1);
  for(int i = 0; i < vec2.size(); i++)
    {
      cout << vec2[i] << " ";
    }
  cout << endl << endl;
}

void testAssignment()
{
  // make and populate a vector with 10 values then print out its contents.
  cout << "Here I make vec1 and print its contents. Then, I set vec2 equal to vec1 and print vec2's contents." << endl;
  Vector vec1;
  for(int i = 0; i < 10; i++)
    {
      vec1.push_back(i*2);
      cout << vec1[i] << " ";
    }
  cout << endl;

  // make a second vector and assign it to the first. then print out its contents
  Vector vec2;
  vec2 = vec1;

  for(int i = 0; i < vec2.size(); i++)
    {
      cout << vec2[i] << " ";
    }
  cout << endl << endl;
}

void testPushBack()
{
  // make a vector and populate it with 1500 ints from 0-1499
  Vector vec;
  for(int i = 0; i < 1500; i++)
    {
      vec.push_back(i);
    }

  // output the first fifty elements
  cout << "First fifty elements" << endl;
  for(int i = 0; i < 50; i++)
    {
      cout << vec[i] << " ";
    }

  // output the last fifty elements
  cout << endl << endl << "Last fifty elements" << endl;
  for(int i = 50; i > 0; i--)
    {
      cout << vec[vec.size() - i] << " ";
    }

  // output the size and capacity to ensure its working properly
  cout << endl << endl << "vector size: " << vec.size() << " vector capacity: " << vec.capacity() << endl << endl;
}

void testBrackets()
{
  // make an initial vector with 20 elements 0-19 and outputs its contents
  Vector vec;
  cout << "vector with 20 elements 0 - 19" << endl;
  for(int i = 0; i < 20; i++)
    {
      vec.push_back(i);
      cout << vec[i] << " ";
    }

  // modify 2 locations to ensure the [] is working properly and outputs the modified vectors contents.
  cout << endl << "Here I modify the vec[3] and vec[17] to be 0 " << endl;
  vec[3] = 0;
  vec[17] = 0;

  for(int i = 0; i < 20; i++)
    {
      cout << vec[i] << " ";
    }
  cout << endl << endl;
}

void testSize()
{
  // makes a vector, populates it, and outputs the vector using the size() method as its bounds
  Vector vec1;
  cout << "printing out two vectors based on their size " << endl;
  for(int i = 0; i < 20; i++)
    {
      vec1.push_back(i);
    }
  for(int i = 0; i < vec1.size(); i++)
    {
      cout << vec1[i] << " ";
    }
  cout << endl;

  // makes a vector, populates it, and outputs the vector using the size() method as its bounds
  Vector vec2;
  for(int i = 0; i < 7; i++)
    {
      vec2.push_back(i);
    }
  for(int i = 0; i < vec2.size(); i++)
    {
      cout << vec1[i] << " ";
    }
  cout << endl << endl;
}
