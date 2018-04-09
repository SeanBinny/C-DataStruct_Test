// define the recursion functions
// recursion functions can be used for recursion and sum up

#ifndef RECURSION_H
#define RECURSION_H

#include <algorithm> // for copy()
#include <iterator> // for ostream_iterator
#include <iostream>

// function to work on factorial
int factorial( int n )
{
    if( n <= 1) // base component
        return 1;
    else        // recursion component
        return n * factorial( n - 1 );
    //end if
} // function factorial


// function to calculate the array element summation
template < class T >
T ArraySum( T a[], int n )
{
    if( n > 0 )
        return a[n - 1] + ArraySum( a, n - 1 );
    return 0; // end if
} // end function ArraySum


// function to swap two values
template < class T >
void swap( T *t1, T *t2 )
{
    T t3 = *t1;
    *t1 = *t2;
    *t2 = *t3;
} // end function swap


// function work s on array arrangement
template < class T >
void permutations( T list[], int start, int end )
{
    // if only one arrangement, output it
    if( start == end ){
        copy( list, list+start+1, ostream_iterator<T>( cout, " " ) );
        cout << endl;
    } // end if
    else // recursion to create all arrangement
    {
        for( int i = start; i <= end; i++ )
        {
            swap( list[start], list[i] );
            permutations( list, start+1, end );
            swap( list[start], list[i] );
        } // end else
    } // end if
} // end function permutations

#endif // RECURSION_H
