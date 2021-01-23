#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

#include <ctype.h>

	/* size_t	ft_lg(int n) */
	/* { */
	/* 	size_t result; */

	/* 	result = 0; */
	/* 	while ((n = n / 10)) */
	/* 		result++; */
	/* 	return (result); */
	/* } */

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

	printf("ft_strlcpy of [%s], [%s] returns -> %lu\n", strlcpy_dest, strlcpy_src, ft_strlcpy(strlcpy_dest, strlcpy_src, 4));
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
	printf("ft_strlcat returns -> %lu\n", ft_strlcat(strlcat_dest, strlcat_src, strcat_size));
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
	ft_putendl_fd("***testing putters ***", 1);
	ft_putstr_fd("putting string to stdout", 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);

	ft_putchar_fd('\n', 1);

	int putnbr_int = 0;
	ft_putstr_fd("ft_putnbr_fd test	", 1);
	ft_putnbr_fd(putnbr_int, 1);
	ft_putchar_fd('\n', 1);
	printf("			%d\n", putnbr_int);

	ft_putchar_fd('\n', 1);

	char *substr_str = "hello i am a string";
	printf("ft_substr output -> [%s]\n", ft_substr(substr_str, 1, 19));

	ft_putchar_fd('\n', 1);

	char *strjoin_str1 = "hello";
	char *strjoin_str2 = "i ama string";
	char *strjoin_result = ft_strjoin(strjoin_str1, strjoin_str2);
	printf("ft_strjoin output -> [%s]\n", strjoin_result);

	ft_putchar_fd('\n', 1);

	char *strtrim_str = "aba";
	char *strtrim_set = "a";
	printf("\t\t\t[%s]\n", strtrim_str);
	printf("ft_strtrim output -> \t[%s]\n", ft_strtrim(strtrim_str, strtrim_set));


	ft_putchar_fd('\n', 1);

	/* printf("output of ft_lg -> %ld\n", ft_lg(13246)); */
	int itoa_n = 2147483647;
	printf("output of ft_itoa ->\t[%s]\n", ft_itoa(itoa_n));
	printf("oupput of printf ->\t[%d]\n", itoa_n);


	ft_putchar_fd('\n', 1);

	char *memccpy_src = "copy till X lalala";
	char *memccpy_dest = (char *)malloc(sizeof(char) * 0x21);
	char *memccpy_ret;
	memccpy_dest[0x20] = '\0';

	memccpy_ret = ft_memccpy(memccpy_dest, memccpy_src, 'X', ft_strlen(memccpy_src));
	printf("memccpy_dest =>\t[%s]\n", memccpy_dest);
	printf("memccpy_ret =>\t[%s]\n", memccpy_ret);

	memccpy_src = "copy till X lalala";
	memccpy_dest = (char *)malloc(sizeof(char) * 0x21);
	memccpy_dest[0x20] = '\0';

	memccpy_ret = memccpy(memccpy_dest, memccpy_src, 'X', ft_strlen(memccpy_src));
	printf("memccpy_dest =>\t[%s]\n", memccpy_dest);
	printf("memccpy_ret =>\t[%s]\n", memccpy_ret);


	ft_putchar_fd('\n', 1);

	char *str = "BBBB";
	char buff1[0xF00];
	char buff2[0xF00];

	memset(buff1, 'A', 20);
	memset(buff2, 'A', 20);
	printf("strlcpy ->\t%lu\n", strlcpy(buff1, str, 0));
	printf("ft_strlcpy ->\t%lu\n", ft_strlcpy(buff1, str, 0));
	

	ft_putchar_fd('\n', 1);

	int tolower_i = -100;
	while (tolower_i < -90)
	{
		printf("i\t\t=>[%d]\ntolower_i\t=>[%d]\n\n", tolower_i, tolower(tolower_i));
		tolower_i++;
	}
	printf("%d\n", 'a' - 'A');

	ft_putchar_fd('\n', 1);


	ft_putchar_fd('\n', 1);

	ft_putendl_fd("▓▓▓▓▓▓▓▓▓▓▓▓▓▓ |||> SPLIT <||| ▓▓▓▓▓▓▓▓▓▓▓▓▓▓", 1);
	char *split_str = "      split   this     for   me please !!!             ";
	char sep = ' ';
	char **split_result;
	int splt_i = 0;
	split_result = ft_split(split_str, sep);
	while (split_result[splt_i])
	{
		printf("[%s]\n", split_result[splt_i]);
		splt_i++;
	}

	ft_putchar_fd('\n', 1);

	/* char *atoi_int = "2147483649"; */
	/* printf("ft_atoi \t%d\n", ft_atoi(atoi_int)); */
	/* printf("atoi \t\t%d\n", atoi(atoi_int)); */
	/* ft_bzero(NULL, 2); */
	/* printf("%p\n", NULL); */

	/* char *substr_str2 = "lorem ipsum dolor sit amet"; */
	/* int substr_i = 0; */
	/* while (substr_i++ < 400) */
	/* 	printf("ft_substr ->\t[%s]\n", ft_substr(substr_str2, substr_i, 20)); */
	char *calloc_test;
	calloc_test = (char *)ft_calloc(0, 1);
	if (calloc_test)
		printf("CALLOCated!!\t[%p]\n", calloc_test);
	ft_putendl_fd("▓▓▓▓▓▓▓▓▓▓▓▓▓▓ |||> STRNSTR <||| ▓▓▓▓▓▓▓▓▓▓▓▓▓▓", 1);
	char *strnstr_hay = "asdfasdfasdfsadf a very long string\0";
	/* char *strnstr_hay = (char *)malloc(15 * sizeof(char)); */
	/* memset(strnstr_hay, 'a', 15); */
	char *strnstr_needle = "asdfasdfasdfsadf a very long string";
	char *strnstr_res;

	size_t strnstr_len = 0;
	while (strnstr_len < 38)
	{
		printf("len => %lu\n", strnstr_len);
		printf("strnstr ->\t[%s]\n", ((strnstr_res = strnstr(strnstr_hay, strnstr_needle, strnstr_len)) ?
					strnstr_res : "NULL"));
		printf("ft_strnstr ->\t[%s]\n", ((strnstr_res = ft_strnstr(strnstr_hay, strnstr_needle, strnstr_len)) ?
					strnstr_res : "NULL"));
		printf("\n");
		strnstr_len++;
	}
	printf("%p\n", strnstr_hay);
	printf("%p\n", strnstr_needle);
	printf("strnstr ->\t[%s]\n", ((strnstr_res = strnstr("ababac", "abac", 0)) ?
					strnstr_res : "NULL"));
	printf("ft_strnstr ->\t[%s]\n", ((strnstr_res = ft_strnstr("ababac", "abac", 0)) ?
					strnstr_res : "NULL"));
	/* printf("strnstr ->\t[%s]\n", ((strnstr_res = strnstr(NULL, "abac", 5)) ? */
	/* 				strnstr_res : "NULL")); */
	/* printf("ft_strnstr ->\t[%s]\n", ((strnstr_res = ft_strnstr(NULL, "abac", 5)) ? */
	/* 				strnstr_res : "NULL")); */

	printf("strnstr ->\t[%s]\n", ((strnstr_res = strnstr(NULL, "", 100)) ?
					strnstr_res : "NULL"));
	printf("ft_strnstr ->\t[%s]\n", ((strnstr_res = ft_strnstr(NULL, "", 100)) ?
					strnstr_res : "NULL"));
	printf("strnstr ->\t[%s]\n", ((strnstr_res = strnstr("ababac", "abac", 6)) ?
					strnstr_res : "NULL"));
	printf("ft_strnstr ->\t[%s]\n", ((strnstr_res = ft_strnstr("ababac", "abac", 6)) ?
					strnstr_res : "NULL"));

	/* ft_putendl_fd("▓▓▓▓▓▓▓▓▓▓▓▓▓▓ |||> SPLIT <||| ▓▓▓▓▓▓▓▓▓▓▓▓▓▓", 1); */
	/* split_str = "      split   this     for   me please !!!             "; */
	/* sep = ' '; */
	/* splt_i = 0; */
	/* split_result = ft_split(split_str, '\0'); */
	/* while (split_result[splt_i]) */
	/* { */
	/* 	printf("[%s]\n", split_result[splt_i]); */
	/* 	splt_i++; */
	/* } */
	printf("\n\n\n");
	/* printf("strnstr ->\t[%s]\n", ((strnstr_res = strnstr(NULL, "abc", 2)) ? */
	/* 				strnstr_res : "NULL")); */
	/* printf("ft_strnstr ->\t[%s]\n", ((strnstr_res = ft_strnstr(NULL, "abc", 2)) ? */
	/* 				strnstr_res : "NULL")); */
	/* printf("size_t oveflow -> [%lu]\n", FT_SIZE_MAX + 8); */
	/* ft_putendl_fd("▓▓▓▓▓▓▓▓▓▓▓▓▓▓ |||> STRLCAT <||| ▓▓▓▓▓▓▓▓▓▓▓▓▓▓", 1); */

	/* char *cat_dest; */
	/* char *ft_cat_dest; */

	/* cat_dest = (char *)malloc(sizeof(*cat_dest) * 25); */
	/* ft_cat_dest = (char *)malloc(sizeof(*cat_dest) * 25); */
	/* int cat_size = 0; */

	/* memset(cat_dest, 'r', 15); */
	/* memset(ft_cat_dest, 'r', 15); */

	/* while (cat_size <= 30) */
	/* { */
	/* 	cat_dest = (char *)malloc(sizeof(*cat_dest) * 25); */
	/* 	ft_cat_dest = (char *)malloc(sizeof(*cat_dest) * 25); */

	/* 	memset(cat_dest, 'r', 15); */
	/* 	memset(ft_cat_dest, 'r', 15); */

	/* 	printf("ft_strlcat ->\t[%lu]\n", */ 
	/* 			ft_strlcat(ft_cat_dest, "lorem ipsum dolor sit amet", cat_size)); */
	/* 	printf("ft_cat_dest =>\t[%s]\n", ft_cat_dest); */

	/* 	printf("strlcat ->\t[%lu]\n", */ 
	/* 			strlcat(cat_dest, "lorem ipsum dolor sit amet", cat_size)); */
	/* 	printf("cat_dest =>\t[%s]\n", cat_dest); */
	/* 	cat_size++; */
	/* 	printf("\n\n\n"); */
	/* } */

	/* printf("\n\n\n"); */
	/* write(1, cat_dest, 15); */
	ft_putendl_fd("", 1);

	return 0;
}
