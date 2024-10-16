#include "library_of_useful_stuff.h"

int universal_get_char()
{
    fflush(stdin);
    int response = getchar();
    return response;
}