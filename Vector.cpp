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
  this->vec_ptr = NULL;
  this->vec_size = 0;
  this->vec_capacity = 0;
}

Vector::Vector(const Vector &other)
{
  vec_size = other.size();
  vec_capacity = other.capacity();

  int *vec_ptr = new int[vec_capacity];
  for(int i = 0; i < vec_size; i++)
    {
      vec_ptr[i] = other.vec_ptr[i];
    }
}

Vector::~Vector()
{
  this->vec_size = 0;
  this->vec_capacity = 0;
  delete[] this->vec_ptr;
}

Vector::Vector& operator=(const Vector &other)
{
  this->vec_size = *other.size();
  this->vec_capacity = *other.capacity();

  int *vec_ptr = new int[vec_capacity];
for(int i = 0; i < vec_size; i++)
  {
    vec_ptr[i] = *other.vec_ptr[i];
  }
}

Vector::size()
{
  return vec_size;
}

Vector::capacity()
{
  return vec_capacity;
}

Vector::push_back(int element)
{
  if(vec_size + 1 >= vec_capacity)
    {
      reserve(vec_size + 1);
    }
  vec_ptr[vec_size + 1] = element;
}

Vector::reserve(int n)
{
  if(vec_capacity <= n)
    {
      vec_capacity *= 2;
    }
}

Vector::int& operator[](unsigned int index)
{
  return &vec_ptr[index];
}
