#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dst;
    const unsigned char *source;

    dst = (unsigned char *)dest;
    source = (const unsigned char *)src;

    if (dst < source)
    {
        while (n > 0)
        {
            *dst = *source;
            dst++;
            source++;
            n--;
        }
    }
    else
    {
        dst += n;
        source += n;
        while (n > 0)
        {
            dst--;
            source--;
            *dst = *source;
            n--;
        }
    }
    return (dest);
}