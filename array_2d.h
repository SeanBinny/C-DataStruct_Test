// 2D-Array  declaration

#ifndef ARRAY_2D_H
#define ARRAY_2D_H

#include<iostream>
using namespace std; // for bad_alloc

// function to create a 2D dynamic Array x[][]
template < class T >
void make2dArray( T ** &x, int numberOfRows, int numberOfColumns )
{
    x = new T * [ numberOfRows ]; // crate Row pointer
    for( int i = 0; i < numberOfRows; i++ )
        x[i] = new T [ numberOfColumns ]; // create Column pointer
    // end for
} // end funtion make2dArray


// function to create and try if 2D array was created successfully
template < class T >
bool Create2dArray( T ** &x, int numberOfRows, int numberOfColumns )
{
    try{
        make2dArray( x, numberOfRows, numberOfColumns );
        return true;
    }
    catch( bad_alloc )
    {
        cerr << "Could not create x" << endl;
        return false;
    }
} // end function Create2dArray


// function to delete2dArray
template < class T >
void delete2dArray( T ** &x, int numberOfRows )
{
    for( int i = 0; i < numberOfRows; i++ ) // delete Columns vector
        delete [] x [ i ];
    // end for
    delete [] x; // delete row vector
    x = NULL;
} // end function delete2dArray

#endif // ARRAY_2D_H

