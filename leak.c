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
	ft_putchar_fd('\n', 1);

	char *split_str = "      split       this for   me  !       ";
	char sep = ' ';
	char **split_result;
	int splt_i = 0;
	split_result = ft_split(NULL, sep);
	(void)split_str;
	if (split_result)
	{
		while (split_result[splt_i])
		{
			printf("[%s]\n", split_result[splt_i]);
			splt_i++;
		}
	}

	splt_i = 0;
	if (split_result)
	{
		while (split_result[splt_i])
		{
			free(split_result[splt_i]);
			splt_i++;
		}
	}
	/* free (split_result); */
	return 0;
}
