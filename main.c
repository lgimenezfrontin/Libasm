/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:45:30 by lgimenez          #+#    #+#             */
/*   Updated: 2024/12/18 16:00:28 by lgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

#define STR1 "Hello"
#define STR2 "How are you"
#define STR3 "Fine!"

/*size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, const void *buf, size_t count);
char	*ft_strdup(const char *s);*/

int       ft_strlen(char *str);
char      *ft_strcpy(char *dst, const char *src);
int       ft_strcmp(const char *s1, const char *s2);
size_t    ft_write(int fd, const void *msg, size_t len);
size_t    ft_read(int fd, void *buff, size_t count);
char      *ft_strdup(const char *s);


void	ft_test_strlen(void)
{
	char *str = "Salut";
	printf("strlen: %ld\n", strlen(str));
	printf("ft_strlen: %d\n", ft_strlen(str));
}

void	ft_test_strcpy(void)
{

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
