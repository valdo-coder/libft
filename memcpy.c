#include "libft.h"


void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dst;
    const unsigned char *source;

    dst = ((unsigned char *)dest);
    source = ((const unsigned char *)src);
    
    while (n > 0)
    {
        *dst = *source;

        dst++;
        source++;
        n--;

    }
    return(dest);
}
