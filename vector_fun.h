#include "vector.h"


template <typename T> 
void Vector<T>::copyFrom ( T const* A, Rank lo, Rank hi ) { 
   _elem = new T[ _capacity = max<Rank>( DEFAULT_CAPACITY, 2 * ( hi - lo ) ) ]; 
   for ( _size = 0; lo < hi; _size++, lo++ ) 
      _elem[ _size ] = A[ lo ]; 
} 



template <typename T> 
void Vector<T>::bubbleSort( Rank lo, Rank hi ) { //assert: 0 <= lo < hi <= size
   while( lo < --hi )
      for( Rank i = lo; i < hi; i++ ) 
         if( _elem[i] > _elem[i + 1] ) 
            swap( _elem[i], _elem[i + 1] );
}

template <typename T> 
void Vector<T>::display()
{
   for(Rank i=0; i< _size; i++)
      cout << _elem[i] << " ";
   cout << endl;
}
