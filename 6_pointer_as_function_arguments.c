#include <stdio.h>

/*
When a program or an application is started then the machine sets aside or reserve some amount of memory for the execution of that program. This reserved memory typically divided into 4 parts.(Heap, Stack, Static/Global, Code(text))

Code(text) -> Stores the various sequential instruction in the program.

Static/Global -> Store the static or global variables(Variables that are declared outside of any function and can be accessed and modified from anywhere of the program).

Stack -> Information about functions like its parameters, all the local variables, the calling function to which it should return, the current statement it is executing and all the information is stored in the stack.


// Of these four segment of the allocated memory the text segment, global segment and the stack segment is fixed. They are decided when the program starts executing. The application or program  however can keep asking for more memory for its heap segment during its execution only.

// When a program in c starts the main() function is invoked. And all the information about the function like its parameters, all the local variables, the calling function to which it should return, the current statement it is executing and all the information is stored in the stack.

// So we will take out from the  stack: some part for the main method and create a unit which we call stack frame. Each function will have a stack frame.

// As C is organized in functions. All the function gets executed By LIFO method in the stack. When a function is called inside another function the execution for calling function get paused until the invoked function finish execution.
If a function finishes execution then that particular stack frame that was allocated for that function is cleared(deallocated) from the stack.

 */

void increment(int *p)
{
    *p = *p + 1;
}

int main()
{
    int a = 10;
    increment(&a);
    printf("A = %d\n", a);
    return 0;
}