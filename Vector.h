/**
 * @file Vector.h
 * @author Mason Enochs
 * @date 2025-02-04
 * @brief Header file for custom vector class
 * 
 * This class will make a custom vector object that acts like a std::vector
 */

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
 private:
  int *vec_ptr; //points to vector's dynamic array
  int vec_size, vec_capacity; //sets current size and current max size(capacity)
 public:


/**
 * Default constructor that initialized an empty vector
 *
 * @pre N/A
 * @post vec_ptr is NULL, vec_size=0, and vec_capacity=0.
 * 
 */
  Vector();


/**
 * Copy constructor that intitalizes a dunamic array of the arropraite size/capacity and copies data from other's array to the new array.
 *
 * @param const Vector &other 
 * @pre N/A
 * @post vec_ptr is initialized, and its array contain other.vec_ptr's data, vec_size = other.vec_size, and vec+capacity=other.vec_capacity.
 * 
 */
  Vector(const Vector &other);


/**
 * Destructor that deallocates vec_ptr.
 *
 * @pre 
 * @post vec_ptr has been deallocated, currenta_size = 0, and capacity = 0;
 * 
 */
  ~Vector();


/**
 * Assignment operator that initializes a dynaic array of the appropraite size and capaicty. Copies data from other's array to the new array.
 *
 * @param const Vector &other 
 * @pre 
 * @return Vector& 
 * @post vec_ptr is initialized, and its array contains other's vec_ptr, size, and capacity data
 * 
 */
  Vector& operator=(const Vector &other);


/**
 * Returns the current num of elements in the vector
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int size();


/**
 * Returns the currently allocated storage capacity of the vector
 *
 * @pre 
 * @return int 
 * @post 
 * 
 */
  int capacity();


/**
 * Similar to std::vector.push_back(int element), stores element at the end of the vector
 *
 * @param int element 
 * @pre if necessary, calls reserve() beofre adding the elemnt
 * @return void 
 * @post Item element has is stored at the end of the vector.
 * 
 */
  void push_back(int element);


/**
 * increases the vector capacity from n to n*2 elements if n exceeds the capacity.
 *
 * @param int n 
 * @pre 
 * @return void 
 * @post Vector capacity is now n. Vector size (and contents) remains the same.
 * 
 */
  void reserve(int n);


/**
 * Returns a reference to the element at position index
 *
 * @param unsigned int index 
 * @pre 
 * @return int& 
 * @post 
 * 
 */
  int& operator[](unsigned int index);
};

#endif
