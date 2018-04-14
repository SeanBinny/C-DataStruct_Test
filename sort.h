#ifndef SORT_H
#define SORT_H
#include "illegalValue.h"
#include "mymath.h"

// function to find the max number
template < class T >
int indexOfMax( T a[], int n )
{
    if( n <= 0 )
        throw illegalParameterValue( "n nust be > 0 ");

    int indexOfMax = 0;
    for( int i = 0; i < n; i++ )
        if( a[indexOfMax] < a[i] )
            indexOfMax = i;

    return indexOfMax;
} // end function indexOfMax


// function find the rank
template < class T >
void rank( T a[], int n, int r[] )
{
    for( int i = 0; i < n; i++ )
        r[i] = 0;   // initialize
    for( int i = 1; i < n; i++ )
        for( int j = 0; j < i; j++ )
            if( a[j] <= a[i] ) r[i]++;
            else r[j]++;
} // end of function rank


// function sort follow the rank order
template < class T >
void rearrange( T a[], int n, int r[] )
{
    T *u = new T [n];

    for( int i = 0; i < n; i++ )
        u[r[i]] = a[i];

    for( i = 0; i < n; i++ )
        a[i] = u[i];

    delete [] u;
} // end of function rerrange


// using selection to sort
template < class T >
void selectionSort( T a[], int n )
{
//    for( int size = n; size > 1; size-- )
//    {
//        int j = indexOfMax( a, size );
//        swap( a[j], a[size - 1]);
//    }

    bool sorted = false;
    for (int size = n; !sorted && (size-1); size -- )
    {
        int indexOfMax = 0;
        sorted = true;
        for( int i = 1; i < size; i++ )
            if( a[indexOfMax] <= a[i] )  indexOfMax = i;
        else sorted = false;             // if program pass here , it must unsorted;
        swap( a[indexOfMax], a[size-1]);

    }
}// end of function


// function just for bubble one time
template < T >
bool bubble( T a[], int n )
{
    bool swapped = false;
    for( int i = 0; i < n-1; i++ )
       if( a[i] > a[i+1] )
       {
           swap( a[i], a[i+1]);
           swapped = true;
       }
    return swapped;
}

template < T >
void bubbleSort( T a[], int n )
{
    for ( int i = n; i > 1 && bubble( a, i); i-- );
}
// end function bubble

#endif // SORT_H
