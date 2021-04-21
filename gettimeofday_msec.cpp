// g++ -o gettimeofday_msec gettimeofday_msec.cpp
#include "Execution.h"
int main()
{
    timer[0].TStart();
    usleep(1080);
    timer[0].TStop();
	Execution[0] = timer[0].Execution_Time();
    std::cout<< "Execution_Time="<<Execution[0]<<"ms"<<std::endl;

    return 0;
}
