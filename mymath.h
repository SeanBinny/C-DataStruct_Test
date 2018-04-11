#ifndef MYMATH_H
#define MYMATH_H

// using Hornor method to deal with the polynomialv
// P(x) = 5*x^3 - 4*x^2 +x + 7 = ((5*x - 4)*x + 1)*x + 7
template < class T >
T hornorMethod ( T coeff[], int n, T &x )
{
    T value = coeff[n]; // save the polynomials of N times
    for( int i = 1; i <= n; i++ )
        value = value * x + coeff[ n-1 ];
    return value;

} //end of function hornorMethod

// function to swap two values
template < class T >
void swap( T *t1, T *t2 )
{
    T t3 = *t1;
    *t1 = *t2;
    *t2 = *t3;
} // end function swap

#endif // MYMATH_H
