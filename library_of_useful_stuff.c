#include "library_of_useful_stuff.h"

int universal_get_char()
{
    fflush(stdin);
    int response = getchar();
    getchar();
    return response;
}

void clear_console()
{
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
    }
}

int int_array_cmp(int * a, int * b, size_t size)
{
    int is_same = 1;
    for (size_t i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            is_same = 0;
            break;
        }
    }
    return is_same;
}

int numeric_char_to_int(int c)
{
    if (c >= '0' && c <= '9')
    {
        return c-48;
    }
    else
    {
        return -1;
    }
}
