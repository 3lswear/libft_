#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

int main()
{

	char *le_title ="                  __           ______     _____.__                   __                   __         ._._._.\n\
	  _______/  |________ /  __  \\  _/ ____\\__|______   ____   _/  |_  ____   _______/  |_  _____| | | |\n\
	 /  ___/\\   __\\_  __ \\>      <  \\   __\\|  \\_  __ \\_/ __ \\  \\   __\\/ __ \\ /  ___/\\   __\\/  ___/ | | |\n\
	 \\___ \\  |  |  |  | \\/   --   \\  |  |  |  ||  | \\/\\  ___/   |  | \\  ___/ \\___ \\  |  |  \\___ \\ \\|\\|\\|\n\
	/____  > |__|  |__|  \\______  /  |__|  |__||__|    \\___  >  |__|  \\___  >____  > |__| /____  >______\n\
    	     \\/                     \\/                         \\/             \\/     \\/            \\/ \\/\\/\\/";

	printf("%s\n", le_title);

	ft_putstr_fd("aaa\n", 1);
	printf("ft_atoi %d\n", ft_atoi("12340"));
	printf("ft_isalpha %d\n", ft_isalpha('1'));
	printf("ft_isdigit -> %d\n", ft_isdigit('i'));
	printf("ft_isalnum -> %d\n", ft_isalnum('-'));
	printf("ft_isascii -> %d\n", ft_isascii('c'));
	printf("ft_isprint -> %d\n", ft_isprint('A'));
	printf("ft_strchr -> %s\n", ft_strchr("cacd", 'c'));
	printf("strchr -> %s\n", strchr("cacd", 'c'));
	printf("ft_strrchr -> %s\n", ft_strrchr("cacd", 'c'));
	printf("strrchr -> %s\n", strrchr("cacd", 'c'));
	printf("ft_strnstr -> %s\n", ft_strnstr("Foo Bar Baz", "Bar", 4));
	char *memset_str1;
	memset_str1 = (char *)malloc(sizeof(char) * 10);
	strcpy(memset_str1, "toto tata");
	printf("string => %s\n", memset_str1);
	printf("ft_memset -> %s\n", (char *)ft_memset(memset_str1, 'a', 3));
	strcpy(memset_str1, "toto tata");
	printf("memset -> %s\n", (char *)memset(memset_str1, 'a', 3));
	bzero(memset_str1, ft_strlen(memset_str1));
	printf("string after ft_bzero -> [%s]\n", memset_str1);
	printf("pointers test: [0]->%p; [3]->%p\n", &memset_str1[0], &memset_str1[3]);
	puts("***ft_memmove test!!!!***");
	char *src_memmove, *dest_memmove;
	src_memmove = (char *)malloc(5 * sizeof(char));
	dest_memmove = (char *)malloc(5 * sizeof(char));
	strcpy(src_memmove, "abcd");
	strcpy(dest_memmove, "hjkl");
	printf("strings are: src => %s, dest => %s\n", src_memmove, dest_memmove);
	printf("dest is -> %s (no overlap)\n", (char *)ft_memcpy(dest_memmove, src_memmove, 4));
	src_memmove = (char *)malloc(7 * sizeof(char));
	dest_memmove = &src_memmove[2];
	strcpy(dest_memmove, "hjkl");
	strcpy(src_memmove, "abcd");
	src_memmove[4] = 'k';
	printf("whole string is => %s\n", src_memmove);
	printf("dest is -> %s (w/ overlap of 2)\n", (char *)ft_memmove(dest_memmove, src_memmove, 4));
	dest_memmove = (char *)malloc(7 * sizeof(char));
	src_memmove = &dest_memmove[2];
	strcpy(dest_memmove, "hjkl");
	strcpy(src_memmove, "abcd");
	dest_memmove[4] = 'c';
	printf("whole string is => %s\n", dest_memmove);
	printf("dest is -> %s (w/ overlap of 2, (d<s))\n", (char *)ft_memmove(dest_memmove, src_memmove, 4));
	printf("char toupper -> %c\n", ft_toupper('a'));
	printf("char tolower -> %c\n", ft_tolower('Z'));
	char memchr_char = 'h';
	char *memchr_string = "henlo iama string";
	printf("the string is [%1$s], pointer is %1$p, char is [%2$3s], char pointer is %2$p\n", memchr_string, ((char *)ft_memchr(memchr_string, memchr_char, ft_strlen(memchr_string))));
	char *memcmp_str1 = "abhdef";
	char *memcmp_str2 = "abcaeg";
	printf("string1 => [%s] string2 => [%s], ft_memcmp -> [%d]\n", memcmp_str1, memcmp_str2, ft_memcmp(memcmp_str1, memcmp_str2, 3));
	printf("*** strls ***\n");
	char *strlcpy_dest;
	char *strlcpy_src;

	strlcpy_dest = (char *)malloc(10 * sizeof(char));
	strlcpy_src = (char *)malloc(10 * sizeof(char));
	strcpy(strlcpy_src, "popa");

	printf("ft_strlcpy of [%s], [%s] returns -> %u\n", strlcpy_dest, strlcpy_src, ft_strlcpy(strlcpy_dest, strlcpy_src, 4));
	printf("dest => [%s], src => [%s]\n", strlcpy_dest, strlcpy_src);

	strlcpy_dest = (char *)malloc(10 * sizeof(char));
	strlcpy_src = (char *)malloc(10 * sizeof(char));
	strcpy(strlcpy_src, "popa");

	printf("strlcpy of [%s], [%s] returns -> %lu\n", strlcpy_dest, strlcpy_src, strlcpy(strlcpy_dest, strlcpy_src, 4));
	printf("dest => [%s], src => [%s]\n", strlcpy_dest, strlcpy_src);

	printf("\n");

	char *strlcat_dest;
	char *strlcat_src;
	int strcat_size = 10;

	strlcat_dest = (char *)malloc(10 * sizeof(char));
	strlcat_src = (char *)malloc(10 * sizeof(char));
	strcat(strlcat_src, "popapopa");
	strcat(strlcat_dest, "joppa");

	printf("dest => [%s], src => [%s]\n", strlcat_dest, strlcat_src);
	printf("ft_strlcat returns -> %u\n", ft_strlcat(strlcat_dest, strlcat_src, strcat_size));
	printf("dest => [%s], src => [%s]\n", strlcat_dest, strlcat_src);

	printf("\n");

	strlcat_dest = (char *)malloc(10 * sizeof(char));
	strlcat_src = (char *)malloc(10 * sizeof(char));
	strcat(strlcat_src, "popapopa");
	strcat(strlcat_dest, "joppa");

	printf("dest => [%s], src => [%s]\n", strlcat_dest, strlcat_src);
	printf("strlcat returns -> %lu\n", strlcat(strlcat_dest, strlcat_src, strcat_size));
	printf("dest => [%s], src => [%s]\n", strlcat_dest, strlcat_src);

	printf("*** malloc funcs !! ***\n");
	char *strdup_src;

	strdup_src = "dfasdf";
	printf("strdup_src => [%s]\nft_strdup -> [%s]\n", strdup_src, ft_strdup(strdup_src));
	/* printf("%lu\n", SIZE_MAX); */
	/* printf("%lu\n", FT_SIZE_MAX); */
	char *calloc_string;
	calloc_string = ft_calloc(5, sizeof(char));
	ft_strlcpy(calloc_string, "popa jopa", 5);
	printf("calloc_string is => [%s]\n", calloc_string);


	return 0;
}
