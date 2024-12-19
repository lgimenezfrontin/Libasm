/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:45:30 by lgimenez          #+#    #+#             */
/*   Updated: 2024/12/19 10:44:25 by lgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stddef.h>

#define STR1 "Hello"
#define STR2 "How are you"
#define STR3 "Fine!"
#define STR4 "Bye"
#define STR5 "This line has been written using ft_write"

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, const void *buf, size_t count);
char	*ft_strdup(const char *s);


void	ft_test_strlen(void)
{
	printf("||TEST STRLEN||\n");

	printf("'%s'\n", STR1);
	printf("strlen: %ld\n", strlen(STR1));
	printf("ft_strlen: %ld\n\n", ft_strlen(STR1));

	printf("'%s'\n", STR2);
	printf("strlen: %ld\n", strlen(STR2));
	printf("ft_strlen: %ld\n\n", ft_strlen(STR2));

//	strlen(0); // Error case without a defined behavior
}

void	ft_test_strcpy(void)
{
	char	*dst1 = malloc(sizeof(char) * 10);
	char	*dst2 = malloc(sizeof(char) * 10);

	printf("||TEST STRCPY||\n");

	printf("With '%s' as src\n", STR3);
	printf("strcpy(into dst1): '%s'\n", strcpy(dst1, STR3));
	printf("ft_strcpy(into dst2): '%s'\n\n", ft_strcpy(dst2, STR3));

	printf("With '%s' as src\n", STR4);
	printf("strcpy(into dst1): '%s'\n", strcpy(dst1, STR4));
	printf("ft_strcpy(into dst2): '%s'\n\n", ft_strcpy(dst2, STR4));

//	strcpy(dst1, 0); // Error case without a defined behavior
//	strcpy(0, STR1); // Error case without a defined behavior
//	strcpy(dst1, STR2); // Error case without a defined behavior

	free(dst1);
	free(dst2);
}

void	ft_test_strcmp(void)
{
	printf("||TEST STRCMP||\n");

	printf("Compare '%s' with '%s'\n", STR1, STR3);
	printf("strcmp: %d\n", strcmp(STR1, STR3));
	printf("ft_strcmp: %d\n\n", ft_strcmp(STR1, STR3));

	printf("Compare '%s' with '%s'\n", STR1, STR2);
	printf("strcmp: %d\n", strcmp(STR1, STR2));
	printf("ft_strcmp: %d\n\n", ft_strcmp(STR1, STR2));

	printf("Compare '%s' with '%s'\n", STR3, STR3);
	printf("strcmp: %d\n", strcmp(STR3, STR3));
	printf("ft_strcmp: %d\n\n", ft_strcmp(STR3, STR3));

//	strcmp(STR1, 0); // Error case without a defined behavior
//	strcmp(0, STR1); // Error case without a defined behavior
}

void	ft_test_write(void)
{
	printf("||TEST WRITE||\n");

	ft_write(1, STR5, ft_strlen(STR5));

//	int	fd1 = open("testwrite.txt", O_CREAT|O_WRONLY);
//	ft_write(fd1, STR5, ft_strlen(STR5));
}

void	ft_test_read(void)
{

}


void	ft_test_strdup(void)
{

}

int	main(void)
{
	ft_test_strlen();
	ft_test_strcpy();
	ft_test_strcmp();
	ft_test_write();
	ft_test_read();
	ft_test_strdup();

	return (0);
}
