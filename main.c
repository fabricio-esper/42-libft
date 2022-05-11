#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	// ft_strlen.c
	/*char	*str;

	str = "Chocolate";
	printf("%d\n", (int) ft_strlen(str));*/

	// ft_atoi.c
	/*char	*str;

	str = "	 		-425390afdg";
	printf("%d\n", ft_atoi(str));*/

	//ft_strnstr.c
	/*char	haystack[100] = "Chocolate is good!";
	char	needle[100] = "go";
	size_t	len	= 9;

	printf("%s\n", strnstr(haystack, needle, len));*/
	
	// ft_strlcat.c
	/*char	dst[100] = "Choco";
	char	src[100] = "late";
	size_t	dstsize;

	dstsize = 8;
	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%s\n" , dst);*/

	// ft_memmove.c
	/*char	dst[100] = "Pizza e bom";
	char	src[100] = "Chocolate e melhor";
	size_t	len = ft_strlen(src);

	printf("%s\n", ft_memmove(dst, src, len));*/

	// ft_calloc.c
	/*size_t	count;
	size_t	size;
	char	*str;
	char	*temp;

	str = "Chocolate";
	count = ft_strlen(str);
	size = sizeof(char);
	temp = ft_calloc(count, size);
	printf("%s\n", temp);
	free(temp);*/

	// ft_strdup.c
	/*const char	*s;

	s = "Chocolate e bom";
	printf("%s\n", ft_strdup(s));
	free(s);*/

	// ft_substr.c
	char			*str;
	unsigned int	start;
	size_t			len;

	str = "I hate chocolate";
	start = 3;
	len = 9;
	printf("%s\n", ft_substr(str, start, len));

	// ft_strjoin.c
	/*char	*s1;
	char	*s2;

	s1 = "Chocolate";
	s2 = " is good";
	printf("%s\n", ft_strjoin(s1 , s2));*/

	return (0);
}
