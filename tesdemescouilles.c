#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
char haystack[30] = "aaabcabcd";
char needle[10] = "aabc";
printf("%s", ft_strnstr(haystack, needle, -1));
}