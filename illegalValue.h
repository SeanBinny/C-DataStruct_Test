// class illegalParameterValue declaration

#ifndef ILLEGALVALUE_H
#define ILLEGALVALUE_H

#include <string>
#include <iostream>
using namespace std;

class illegalParameterValue
{
public:
    illegalParameterValue():
        message( "Illegal Parameter Value" ){}
    illegalParameterValue( char * theMessage )
    {   message = theMessage; }

    void outputMessage() { cout << message << endl; } // function can be used in block catch
private:
    string message;
}; // end class illegalParameterValue

#endif
