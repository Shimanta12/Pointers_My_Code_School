#include <stdio.h>

/*
Size of character array >= no. of characters + 1.
For example "John" should be stored in a character array of size>=5.
To store the information that this is the end of the character array, at the end of the string in the next position we put a null character '\0'

All the function for string manipulation in c expect that strings will be null terminated. This is a rule. Thats why we need a extra space to store this null character.
 */

void print(char *c)
{
    printf("%d\n", sizeof(c)); // Size of pointer in a typical architecture is 4 bytes.
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main()
{
    char c[20] = "Shimanta"; // Null termination in string literal is implicit.
    /*
    char c[20] = "shimanta"; // If we use string literals in initialization statement of an array, then the string get stored in the space that is allocated for the array.
    char *c = "shimanta"; // But in this case string gets stored as compile time constant. it will be stored in the text segment of the program memory. It can not  be modified.
    c[0]='P'; // Thats why this will be invalid.

     */
    print(c);
    return 0;
}