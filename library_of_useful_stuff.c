#include "library_of_useful_stuff.h"

int universal_get_char()
{
    fflush(stdin);
    int response = getchar();
    return response;
}

void clear_console()
{
    for (int i = 0; i < 1000; i++)
    {
        printf("\n");
    }
}