#include "Counter.h"
using namespace std;
Counter::Counter(int num):c(num)
{
    //ctor
}

Counter::~Counter()
{
    //dtor
}

int Counter::getCounter(){
    return c;
}
