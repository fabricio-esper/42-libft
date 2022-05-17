#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	// ft_isalpha.c
	/*char	c;
	int		ret;

	c = '0';
	ret = ft_isalpha(c);
	if (ret == 1)
		printf("ret = %d -- char c faz parte do alfabeto\n", ret);
	else
		printf("ret = %d -- char c não faz parte do alfabeto\n", ret);*/

	// ft_isdigit.c
	/*char	c;
	int		ret;

	c = 'j';
	ret = ft_isdigit(c);
	if (ret == 1)
		printf("ret = %d -- char c faz parte dos dígitos\n", ret);
	else
		printf("ret = %d -- char c não faz parte dos dígitos\n", ret);*/

	// ft_isalnum.c
	/*char	c;
	int		ret;

	c = 'a';
	ret = ft_isalnum(c);
	if (ret == 1)
		printf("ret = %d -- char c faz parte dos alfanuméricos\n", ret);
	else
		printf("ret = %d -- char c não faz parte dos alfanuméricos\n", ret);*/

	// ft_isascii.c
	/*char	c;
	int		ret;

	c = 128;
	ret = ft_isascii(c);
	if (ret == 1)
		printf("ret = %d -- char c faz parte da tabela ascii\n", ret);
	else
		printf("ret = %d -- char c não faz parte da tabela ascii\n", ret);*/

	// ft_isprint.c
	/*char	c;
	int		ret;
	
	c = 127;
	ret = ft_isprint(c);
	if (ret == 1)
		printf("ret = %d -- char c faz parte dos caracteres printaveis\n", ret);
	else
		printf("ret = %d -- char c não faz parte dos caracteres printaveis\n", ret);*/

	// ft_strlen.c
	/*char	*str;

	str = "Chocolate";
	printf("%d\n", (int) ft_strlen(str));*/

	// ft_memset.c
	/*char	*b;
	int		c;
	size_t	len;

	b = "Chocolate is good";
	c = 64;
	len = 9;
	printf("%p\n", ft_memset(b, c, len));*/

	// ft_strchr.c
	/*char	*s;
	int		c;

	s = "Chocolate e guga";
	c = 'e';
	printf("%s\n", ft_strchr(s, c));*/

	// ft_atoi.c
	/*printf("a int max 2147483647 : %d\n", atoi("2147483647"));
    printf("f int max 2147483647 : %d\n", ft_atoi("2147483647"));
    printf("a int min -2147483648 : %d\n", atoi("-2147483648"));
    printf("f int min -2147483648 : %d\n", ft_atoi("-2147483648"));
    printf("a int over 9999999999 : %d\n", atoi("9999999999"));
    printf("f int over 9999999999 : %d\n", ft_atoi("9999999999"));
    printf("a int under -9999999999 : %d\n", atoi("-9999999999"));
    printf("f int under -9999999999 : %d\n", ft_atoi("-9999999999"));
    printf("a long long plus 92233720368547758 : %d\n", atoi("92233720368547758"));
    printf("f long long plus 92233720368547758 : %d\n", ft_atoi("92233720368547758"));
    printf("a long long minus -92233720368547758 : %d\n", atoi("-92233720368547758"));
    printf("f long long minus -92233720368547758 : %d\n", ft_atoi("-92233720368547758"));
    printf("a long long max 9223372036854775807 : %d\n", atoi("9223372036854775807"));
    printf("f long long max 9223372036854775807 : %d\n", ft_atoi("9223372036854775807"));
    printf("a long long min -9223372036854775808 : %d\n", atoi("–9223372036854775808"));
    printf("f long long min -9223372036854775808 : %d\n", ft_atoi("–9223372036854775808"));
    printf("a long long max / 10 922337203685477580 : %d\n", atoi("922337203685477580"));
    printf("f long long max / 10 922337203685477580 : %d\n", ft_atoi("922337203685477580"));
    printf("a long long max / 10 + 1 922337203685477581 : %d\n", atoi("922337203685477581"));
    printf("f long long max / 10 + 1 922337203685477581 : %d\n", ft_atoi("922337203685477581"));
    printf("a long long max / 10 + 4 922337203685477584 : %d\n", atoi("922337203685477584"));
    printf("f long long max / 10 + 4 922337203685477584 : %d\n", ft_atoi("922337203685477584"));
    printf("a long long max / 10 + 5 922337203685477585 : %d\n", atoi("922337203685477585"));
    printf("f long long max / 10 + 5 922337203685477585 : %d\n", ft_atoi("922337203685477585"));
    printf("a long long max - 1 922337203685477586 : %d\n", atoi("922337203685477586"));
    printf("f long long max - 1 922337203685477586 : %d\n", ft_atoi("922337203685477586"));
    printf("a long long max + 1 9223372036854775808 : %d\n", atoi("9223372036854775808"));
    printf("f long long max + 1 9223372036854775808 : %d\n", ft_atoi("9223372036854775808"));
    printf("a long long max + 2 9223372036854775809 : %d\n", atoi("9223372036854775809"));
    printf("f long long max + 2 9223372036854775809 : %d\n", ft_atoi("9223372036854775809"));
    printf("a long long max + 10 9223372036854775817 : %d\n", atoi("9223372036854775817"));
    printf("f long long max + 10 9223372036854775817 : %d\n", ft_atoi("9223372036854775817"));
    printf("a long long min - 1 –9223372036854775809 : %d\n", atoi("–9223372036854775809"));
    printf("f long long min - 1 –9223372036854775809 : %d\n", ft_atoi("–9223372036854775809"));
    printf("a long long min - 2 –9223372036854775810 : %d\n", atoi("–9223372036854775810"));
    printf("f long long min - 2 –9223372036854775810 : %d\n", ft_atoi("–9223372036854775810"));
    printf("a long long min - 10 –9223372036854775818 : %d\n", atoi("–9223372036854775818"));
    printf("f long long min - 10 –9223372036854775818 : %d\n", ft_atoi("–9223372036854775818"));
    printf("a long long over 9223379876854775807 : %d\n", atoi("9223379876854775807"));
    printf("f long long over 9223379876854775807 : %d\n", ft_atoi("9223379876854775807"));
    printf("a long long under -9223379876854775807 : %d\n", atoi("-9223379876854775807"));
    printf("f long long under -9223379876854775807 : %d\n", ft_atoi("-9223379876854775807"));
    printf("a long long half 4611686018427387903 : %d\n", atoi("4611686018427387903"));
    printf("f long long half 4611686018427387903 : %d\n", ft_atoi("4611686018427387903"));
    printf("a zero 0 : %d\n", atoi("0"));
    printf("f zero 0 : %d\n", ft_atoi("0"));
    printf("a empty  : %d\n", atoi(""));
    printf("f empty  : %d\n", ft_atoi(""));*/

	// ft_memcmp.c
	/*char	s2[] = {0, 0, 127, 0};
	char	s3[] = {0, 0, 42, 0};
	printf("%d\n", ft_memcmp(s2, s3, 4));*/

	// ft_strncmp.c 
	/*char	s1[] = "atoms\0\0\0\0";
	char	s2[] = "a\0toms\0abc";
	printf("%d\n", ft_strncmp(s1, s2, 8));
	printf("%d\n", ft_memcmp(s1, s2, 8));*/

	// ft_strrchr.c
	/*char	*s;
	int		c;

	s = "tripouille";
	c = 0;
	printf("%s\n", ft_strrchr(s, c));*/

	// ft_strnstr.c
	/*char	haystack[100] = "Chocolate is good!";
	char	needle[100] = "go";
	size_t	len	= 9;

	printf("%s\n", strnstr(haystack, needle, len));*/
	
	// ft_strlcat.c
	/*char	dst[100] = "Choco";
	char	src[100] = "late";
	size_t	dstsize;

	dstsize = 8;
	printf("%lu\n", strlcat(dst, src, dstsize));
	printf("%s\n" , dst);*/

	// ft_strlcpy.c
	/*char	dest[10]; ft_memset(dest, 'A', 10);
	char	src[] = "coucou";
	printf("%d\n", (int) ft_strlcpy(dest, src, 0));
	printf("%c\n", dest[0]);*/

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
	/*char			*str;
	unsigned int	start;
	size_t			len;

	str = "I hate chocolate";
	start = 3;
	len = 9;
	printf("%s\n", ft_substr(str, start, len));*/

	// ft_strjoin.c
	/*char	*s1;
	char	*s2;

	s1 = "Chocolate";
	s2 = " is good";
	printf("%s\n", ft_strjoin(s1 , s2));*/

	// ft_strtrim.c
	/*char	*str;
	char	*set;

	str = "lalaagulabonitalalalalala";
	set = "la";
	printf("%s\n", ft_strtrim(str, set));*/

	return (0);
}
