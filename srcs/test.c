
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char*	str1 = (char*)malloc(40);
	char*	str2 = 0;

	printf("str1 = %s, str2 = %s\n", str1, str2);

	str2 = strcpy(0, "bonjour");
	
	printf("str1 = %s, str2 = %s\n", str1, str2);

	free(str1);

	return 0;
}
