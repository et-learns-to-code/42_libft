/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etien <etien@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:55:55 by etien             #+#    #+#             */
/*   Updated: 2024/06/03 16:57:02 by etien            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void	*b, int c, size_t len)
{
	void	*a;

	a = b;
	while (len--)
	{
		*(unsigned char *)b++ = (unsigned char)c;
	}
	return (a);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];

    // Use the custom memset function
    ft_memset(buffer, 'A', sizeof(buffer));

    // Print the buffer to verify it was correctly set
    for (size_t i = 0; i < sizeof(buffer); i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    return 0;
}
*/
