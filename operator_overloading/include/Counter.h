#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>
using namespace std;

class Counter
{
    public:
        Counter operator ++(){
            ++c;
            return Counter(c);
        }
        Counter operator --(){
            --c;
            return Counter(c);
        }
        Counter operator ++(int){
            c++;
            return Counter(c);
        }
        Counter operator --(int){
            c--;
            return Counter(c);
        }
        int getCounter();
        Counter(int c);
        virtual ~Counter();

    protected:

    private:
    int c = 0;
};

#endif // COUNTER_H
