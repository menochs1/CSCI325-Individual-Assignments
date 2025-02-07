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

Vector::Vector()
{
  vec_ptr = NULL;
  vec_size = 0;
  vec_capacity = 0;
}

Vector::Vector(const Vector &other)
{
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;

  vec_ptr = new int[vec_capacity];
  for(int i = 0; i < vec_size; i++)
    {
      vec_ptr[i] = other.vec_ptr[i];
    }
}

Vector::~Vector()
{
  vec_size = 0;
  vec_capacity = 0;
  delete[] vec_ptr;
}

Vector& Vector::operator=(const Vector &other)
{
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;

  vec_ptr = new int[vec_capacity];
for(int i = 0; i < vec_size; i++)
  {
    vec_ptr[i] = other.vec_ptr[i];
  }
 return *this;
}

int Vector::size()
{
  return vec_size;
}

int Vector::capacity()
{
  return vec_capacity;
}

void Vector::push_back(int element)
{
  if(vec_size == 0 and vec_capacity == 0)
    {
      reserve(1);
      vec_ptr[vec_size] = element;
      vec_size++;
    }
  else if(vec_size >= vec_capacity)
    {
      reserve(vec_size * 2);
      vec_ptr[vec_size] = element;
      vec_size++;
    }
  else
    {
      vec_ptr[vec_size] = element;
      vec_size++;
    }
}
void Vector::reserve(int n)
{
  int *newPtr = new int[n];
  for(int i = 0; i < vec_size; i++)
    {
      newPtr[i] = vec_ptr[i];
    }
  vec_capacity = n;
  delete[] vec_ptr;
  vec_ptr = newPtr;
}

int& Vector::operator[](unsigned int index)
{
  if(index <= (unsigned int)vec_size)
    {
      return vec_ptr[index];
    }
  else
    {
      std::cerr << "index out of bounds." << std::endl;
      return vec_ptr[index];
    }
}
