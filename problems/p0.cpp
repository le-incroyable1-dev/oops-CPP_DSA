#include<iostream>
using namespace std;

class Thapar_EST
{
    
};

class UTA018{
    
};

void translate(int a) throw(Thapar_EST,UTA018)
{
    if(a == 0)
    throw Thapar_EST();
    else if(a == 1)
    throw UTA018();
    else
    throw 10;
}

int main()
{
    try
    {
        translate(22);
    }
    
    catch(int x){cout<<"Thrown an integer";}
    
    return 0;
}


/*
OUTPUT : 
std::terminate() called after throwing an instance of 'int'

std::terminate() is called by the C++ runtime when the program cannot continue for any of the following reasons:

1) an exception is thrown and not caught (it is implementation-defined whether any stack unwinding is done in this case)
2) a function directly invoked by the exception handling mechanism while handling an exception that has not yet been caught exits via an exception (e.g. a destructor of some local object, or a copy constructor constructing a catch-clause parameter)
3) the constructor or the destructor of a static or thread-local (since C++11) object throws an exception
4) a function registered with std::atexit or std::at_quick_exit (since C++11) throws an exception

*/

