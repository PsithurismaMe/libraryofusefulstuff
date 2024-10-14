#include "library_of_useful_stuff.h"

int universal_get_char()
{
    FILE * ptr = freopen(NULL, "rb", stdin);
    int response = fgetc(ptr);
    fclose(ptr);
    return response;
}