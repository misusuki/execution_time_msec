#include <iostream>
#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>

long Execution[100];
long seconds, mseconds, useconds;   
struct timeval start, end;

    
class  Execution_Watch
{
public:
    // Constructor.
    Execution_Watch()
    {   
    }
    // Start counter.
    void TStart()
    {      gettimeofday(&start, NULL);
    }
    // Stop counter.
    void TStop()
    {    gettimeofday(&end, NULL);
    }
    // Get duration.
    long Execution_Time()
    {   seconds  = end.tv_sec  - start.tv_sec;
		useconds = end.tv_usec - start.tv_usec;

		mseconds = ((seconds) * 1000 + useconds/1000.0) + 0.5;
		
		return mseconds;
    }
	
private:
	
};

// Execution watch object.
 Execution_Watch timer[100];


