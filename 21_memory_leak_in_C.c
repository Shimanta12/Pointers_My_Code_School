#include <stdio.h>

int main()
{
    /*
    Heap is not fixed in size and our application can claim more memory in the heap secion as long as our system itself is not running out of memory. And if we are not deallocating and this unused memory on the heap, we are depleting and wasting memory which is an important resource. Our application consumption will only keep on growing with time. Memory leaks are really nasty bugs to have in your program.  Anything unused and unreferenced under heap is garbage. In C or C++ we have to make sure as programmers that garbage is not created on the heap. Memory leak is nothing but growth of garbage in the heap. In languages like Java or C#, garbage is automatically cleared from the heap. So programmer does not have to worry about freeing or deallocating the memory on heap which is a coold feature to have. It avoids memory leak.


     */
}