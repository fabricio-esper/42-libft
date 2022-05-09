#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	// ft_atoi.c
	/*
	char	*str;

	str = "	 --42afdg";
	printf("%d\n", atoi(str));
	*/

	//ft_strnstr.c
	char	haystack[100] = "Chocolate is good!";
	char	needle[100] = "is";
	size_t	len	= 9;

	printf("%s\n", strnstr(haystack, needle, len));

	// ft_strlcat.c
	/*char	dst[100] = "Choco";
	char	src[100] = "late";
	size_t	dstsize;

	dstsize = 8;
	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%s\n" , dst);
	*/
	return (0);
}
