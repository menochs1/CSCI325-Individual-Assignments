/**
 * @file Vector.cpp
 * @author Mason Enochs
 * @date 2025-02-04
 * @brief Implementation file for Vector.h
 * 
 * Implements the declared functions for Vector.h to make the vector object.
 */

#include <iostream>
#include "Vector.h"

// constructor initalizes all to 0/NULL
Vector::Vector()
{
  vec_ptr = NULL;
  vec_size = 0;
  vec_capacity = 0;
}

// copy constructor
Vector::Vector(const Vector &other)
{
  // changes this size and capacity to the other's
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;

  // updates the array's size and copies the data from other's array to this array
  vec_ptr = new int[vec_capacity];
  for(int i = 0; i < vec_size; i++)
    {
      vec_ptr[i] = other.vec_ptr[i];
    }
}

// deconstructor deallocates and sets size and capacity back to 0
Vector::~Vector()
{
  vec_size = 0;
  vec_capacity = 0;
  delete[] vec_ptr;
}

// overloaded assignment operator
Vector& Vector::operator=(const Vector &other)
{
  // updates current size and capacity to the other's
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;

  // copies data over
  vec_ptr = new int[vec_capacity];
  for(int i = 0; i < vec_size; i++)
  {
    vec_ptr[i] = other.vec_ptr[i];
  }

  // returns the array with the copied data
  return *this;
}

// size accessor
int Vector::size()
{
  return vec_size;
}

// capacity accessor
int Vector::capacity()
{
  return vec_capacity;
}

// puts an element at the end of the array
void Vector::push_back(int element)
{
  // checks to see if the vector is in its initial condition
  if(vec_size == 0 and vec_capacity == 0)
    {
      // reserves 1 slot initaly and assigns the element to that slot.
      reserve(1);
      vec_ptr[vec_size] = element;
      vec_size++;
    }
  else if(vec_size >= vec_capacity)
    {
      // reserves double the memory and assigns the element to the end
      reserve(vec_size * 2);
      vec_ptr[vec_size] = element;
      vec_size++;
    }
  else
    {
      // no capacity needed so we just assign the element to the end
      vec_ptr[vec_size] = element;
      vec_size++;
    }
}

// reserves n slots in capacity for the array to use
void Vector::reserve(int n)
{
  // new ptr to copy the data over into
  int *newPtr = new int[n];
  for(int i = 0; i < vec_size; i++)
    {
      newPtr[i] = vec_ptr[i];
    }
  // assigns new capacity
  vec_capacity = n;
  //delete old data and assigns our array to the new data
  delete[] vec_ptr;
  vec_ptr = newPtr;
}

// overloaded [] operator to access an element at index
int& Vector::operator[](unsigned int index)
{
  // if we are in our bounds, return the indexed size
  if(index <= (unsigned int)vec_size)
    {
      return vec_ptr[index];
    }
  else
    {
      // outputs that we accessed out of bounds
      std::cerr << "index out of bounds." << std::endl;
      return vec_ptr[index];
    }
}
