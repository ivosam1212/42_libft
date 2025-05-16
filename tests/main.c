/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isam-alv <isam-alv@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:41:45 by isam-alv          #+#    #+#             */
/*   Updated: 2025/05/16 19:38:20 by isam-alv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../v1/libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	ft_isalpha_test(void)
{
	printf("\nTest for ft_isalpha.\n");
	printf("My function trying with \'B\': %d ", ft_isalpha('B'));
	printf("Original: %d\n", isalpha('B'));
	printf("My function trying with \'9\': %d ", ft_isalpha('9'));
	printf("Original: %d\n", isalpha('9'));
	printf("My function trying with \'a\': %d ", ft_isalpha('a'));
	printf("Original: %d\n", isalpha('a'));
	printf("My function trying with \'#\': %d ", ft_isalpha('#'));
	printf("Original: %d\n", isalpha('#'));
}

void	ft_isdigit_test(void)
{
	printf("\nTest for ft_isdigit.\n");
	printf("My function trying with \'B\': %d ", ft_isdigit('B'));
	printf("Original: %d\n", isdigit('B'));
	printf("My function trying with \'9\': %d ", ft_isdigit('9'));
	printf("Original: %d\n", isdigit('9'));
}

void	ft_isalnum_test(void)
{
	printf("\nTest for ft_isalnum.\n");
	printf("My function trying with \'B\': %d ", ft_isalnum('B'));
	printf("Original: %d\n", isalnum('B'));
	printf("My function trying with \'9\': %d ", ft_isalnum('9'));
	printf("Original: %d\n", isalnum('9'));
	printf("My function trying with \'a\': %d ", ft_isalnum('a'));
	printf("Original: %d\n", isalnum('a'));
	printf("My function trying with \'#\': %d ", ft_isalnum('#'));
	printf("Original: %d\n", isalnum('#'));
}

void	ft_isascii_test(void)
{
	printf("\nTest for ft_isascii.\n");
	printf("My function trying with \'200\': %d ", ft_isascii(200));
	printf("Original: %d\n", isascii(200));
	printf("My function trying with \'110\': %d ", ft_isascii(110));
	printf("Original: %d\n", isascii(110));
	printf("My function trying with \'-12\': %d ", ft_isascii(-12));
	printf("Original: %d\n", isascii(-12));
	printf("My function trying with \'0\': %d ", ft_isascii(0));
	printf("Original: %d\n", isascii(0));
}

void	ft_isprint_test(void)
{
	printf("\nTest for ft_isprint.\n");
	printf("My function trying with \'33: !\': %d ", ft_isprint(33));
	printf("Original: %d\n", isprint(33));
	printf("My function trying with \'65: A\': %d ", ft_isprint(65));
	printf("Original: %d\n", isprint(65));
	printf("My function trying with \'-12\': %d ", ft_isprint(-12));
	printf("Original: %d\n", isprint(-12));
	printf("My function trying with \'0\': %d ", ft_isprint(0));
	printf("Original: %d\n", isprint(0));
}

void	ft_strlen_test(void)
{
	char	*s_test;

	printf("\nTest for ft_strlen.\n");
	s_test = "";
	printf("Testing an empty string with my function: %zu ", ft_strlen(s_test));
	printf("Original: %zu\n", strlen(s_test)); 
	s_test = " ";
	printf("Testing \" \" with my function: %zu ", ft_strlen(s_test));
	printf("Original: %zu\n", strlen(s_test)); 
	s_test = "Hola";
	printf("Testing \"Hola\" with my function: %zu ", ft_strlen(s_test));
	printf("Original: %zu\n", strlen(s_test)); 
	s_test = "Hola como estas?";
	printf("Testing \"Hola como estas?\" with my function: %zu ", ft_strlen(s_test));
	printf("Original: %zu\n", strlen(s_test)); 
}

void	ft_memset_test(void)
{
	char	buffer[20];
	size_t	n;

	n = 5;
	strcpy(buffer, "Hola como estas?");
	printf("\nTest for ft_memset.\n");
	printf("Testing \"Hola como estas?\" string with an \'s\' to set in memory: %s ", (char *)ft_memset(buffer, 'A', n));
	printf("Original: %s\n", (char *)memset(buffer, 'A', n));
	n = 20;
	printf("Testing \"Hola como estas?\" string with an \'s\' to set in memory: %s ", (char *)ft_memset(buffer, 'A', n));
	printf("Original: %s\n", (char *)memset(buffer, 'A', n));
}

void	ft_bzero_test(void)
{
	char	buffer[20];
	size_t	n;

	n = 5;
	strcpy(buffer, "Hola como estas?");
	printf("\nTest for ft_bzero.\n");
	ft_bzero(buffer, n);
	printf("Setting \'\\0\' to \"Hola como estas?\": %s ", buffer);
	strcpy(buffer, "Hello, World!");
	bzero(buffer, n);
	printf("Original: %s\n", buffer);
}

void	ft_memcpy_test(void)
{
	char	dst[50];
	char	*src;
	size_t	n;

	src = "Hola como estas?";
	n = 10;
	printf("\nTest for ft_memcpy.\n");
	printf("Copying \"Hola como estas?\" only by 5 bytes: %s ", ((char *)ft_memcpy(dst, src, n)));
	printf("Original: %s\n", ((char *)memcpy(dst, src, n)));
}

void	ft_memmove_test(void)
{
    char buffer[50];
    char buffer2[50];
    char *src;
    size_t n;
    
    // Test 1: Basic non-overlapping case (similar to memcpy)
    src = "Hola como estas?";
    n = 10;
    printf("\nTest 1 for ft_memmove - Basic non-overlapping:\n");
    printf("ft_memmove: %.*s\n", (int)n, (char *)ft_memmove(buffer, src, n));
    printf("memmove:    %.*s\n", (int)n, (char *)memmove(buffer2, src, n));
    
    // Test 2: Overlapping case - source before destination
    strcpy(buffer, "Hola como estas?");
    printf("\nTest 2 for ft_memmove - Overlapping (src before dest):\n");
    printf("Original:   %s\n", buffer);
    printf("ft_memmove: %s\n", (char *)ft_memmove(buffer + 5, buffer, 10));
    
    // Reset buffer for comparison with standard memmove
    strcpy(buffer, "Hola como estas?");
    printf("memmove:    %s\n", (char *)memmove(buffer + 5, buffer, 10));
    
    // Test 3: Overlapping case - destination before source
    strcpy(buffer, "Hola como estas?");
    printf("\nTest 3 for ft_memmove - Overlapping (dest before src):\n");
    printf("Original:   %s\n", buffer);
    printf("ft_memmove: %s\n", (char *)ft_memmove(buffer, buffer + 5, 10));
    
    // Reset buffer for comparison with standard memmove
    strcpy(buffer, "Hola como estas?");
    printf("memmove:    %s\n", (char *)memmove(buffer, buffer + 5, 10));
    
    // Test 4: Zero-length move
    strcpy(buffer, "Hola como estas?");
    printf("\nTest 4 for ft_memmove - Zero-length move:\n");
    printf("Original:   %s\n", buffer);
    printf("ft_memmove: %s\n", (char *)ft_memmove(buffer + 5, buffer, 0));
    
    // Reset buffer for comparison with standard memmove
    strcpy(buffer, "Hola como estas?");
    printf("memmove:    %s\n", (char *)memmove(buffer + 5, buffer, 0));
    
    // Test 5: Handle NULL pointers (only for ft_memmove)
    printf("\nTest 5 for ft_memmove - NULL pointers with n=0:\n");
    printf("ft_memmove with NULL: %p\n", ft_memmove(NULL, NULL, 0));
    // Skip testing system memmove with NULL due to compiler warnings
    printf("Note: System memmove test with NULL skipped due to compiler warnings\n");
}

int	main(void)
{
	ft_isalpha_test();
	ft_isdigit_test();
	ft_isalnum_test();
	ft_isascii_test();
	ft_isprint_test();
	ft_strlen_test();
	ft_memset_test();
	ft_bzero_test();
	ft_memcpy_test();
	ft_memmove_test();
	return (0);
}
