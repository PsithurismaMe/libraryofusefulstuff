#ifndef LIBRARY_OF_USEFUL_STUFF
#define LIBRARY_OF_USEFUL_STUFF
#include <stdio.h>


// This function will read ANY character INCLUDING NEWLINES from stdin. It DOES NOT use OS specific system calls.
int universal_get_char();
// This function spams a bunch of newlines to stdout, "clearing" the console.
void clear_console();

// Does the same thing as strbncmp except for integer arrays.
int int_array_cmp(int * a, int * b, size_t size);

#endif