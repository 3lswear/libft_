#include <stdio.h>
#include <string.h>
#include "libft.h"

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


	return 0;
}
