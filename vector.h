#include <iostream>
using namespace std;


#pragma once

using Rank = unsigned int; 
#define DEFAULT_CAPACITY  3 


template <typename T> class Vector { 
protected:
   Rank _size; Rank _capacity;  T* _elem; 
   void copyFrom ( T const* A, Rank lo, Rank hi ); 
   
public:
   Vector ( Rank c = DEFAULT_CAPACITY, Rank s = 0, T v = 0 ) 
   { _elem = new T[_capacity = c]; for ( _size = 0; _size < s; _elem[_size++] = v ); } 
   Vector ( T const* A, Rank n ) { copyFrom ( A, 0, n ); } 
   
   ~Vector() { delete [] _elem; } 

   void bubbleSort ( Rank lo, Rank hi ); 
   
   Rank size() const { return _size; } 
   bool empty() const { return !_size; } 

   void display();
   
}; //Vector


#include "vector_fun.h"
