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

void testPushBack();
void testBrackets();
void testSize();
void testAssignment();
void testCopy();

int main() {
  cout << "Test 1: Push Back " << endl << endl;
  testPushBack();

  cout << "Test 2: Brackets " << endl << endl;
  testBrackets();

  cout << "Test 3: Size " << endl << endl;
  testSize();
    
  cout << "Test 4: Assignment" << endl << endl;
  testAssignment();

  cout << "Test 5: Copy " << endl << endl;
  testCopy();
  
  return 0;
}

void testCopy()
{
  cout << "Here I make vec1 and print its contents. Then, I copy vec1 to vec2 and print out its contents" << endl;
  Vector vec1;
  for(int i = 0; i < 5; i++)
    {
      vec1.push_back(i*5);
      cout << vec1[i] << " ";
    }
  cout << endl;

  Vector vec2(vec1);

  for(int i = 0; i < vec2.size(); i++)
    {
      cout << vec2[i] << " ";
    }
  cout << endl << endl;
}

void testAssignment()
{
  cout << "Here I make vec1 and print its contents. Then, I set vec2 equal to vec1 and print vec2's contents." << endl;
  Vector vec1;
  for(int i = 0; i < 10; i++)
    {
      vec1.push_back(i*2);
      cout << vec1[i] << " ";
    }
  cout << endl;

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
  Vector vec;
  for(int i = 0; i < 1500; i++)
    {
      vec.push_back(i);
    }
  cout << "First fifty elements" << endl;
  for(int i = 0; i < 50; i++)
    {
      cout << vec[i] << " ";
    }
  cout << endl << endl << "Last fifty elements" << endl;
  for(int i = 50; i > 0; i--)
    {
      cout << vec[vec.size() - i] << " ";
    }
  cout << endl << endl << "vector size: " << vec.size() << " vector capacity: " << vec.capacity() << endl << endl;
}

void testBrackets()
{
  Vector vec;
  cout << "vector with 20 elements 0 - 19" << endl;
  for(int i = 0; i < 20; i++)
    {
      vec.push_back(i);
      cout << vec[i] << " ";
    }
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
