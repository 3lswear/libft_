#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

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


	return 0;
}
