/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:45:30 by lgimenez          #+#    #+#             */
/*   Updated: 2024/12/18 17:11:53 by lgimenez         ###   ########.fr       */
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

//	strlen(null); // Error case without a defined behavior
}

void	ft_test_strcpy(void)
{
	char	*dst = malloc(sizeof(char) * 10);

	printf("||TEST STRCPY||\n");

	printf("We copy '%s' into dst with strcpy\n", STR1);
	printf("dst: %s\n\n", strcpy(dst, STR1));

	printf("We copy '%s' into dst with strcpy\n", STR4);
	printf("dst: %s\n\n", strcpy(dst, STR4));

	free(dst);
}

void	ft_test_strcmp(void)
{
//	printf("ft_strcmp: %d\n", ft_strcmp(STR1, STR2));
}

void	ft_test_write(void)
{

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
