/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etien <etien@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:17:37 by etien             #+#    #+#             */
/*   Updated: 2024/06/03 12:29:03 by etien            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>

int main() {
    char test_chars[] = {'A', 'b', '3', '$', '9'};
    int num_test_chars = sizeof(test_chars) / sizeof(test_chars[0]);

    printf("Testing ft_isdigit function:\n");
    for (int i = 0; i < num_test_chars; i++) {
        printf("ft_isdigit('%c') = %d\n", test_chars[i], 
				ft_isdigit(test_chars[i]));
    }

	return 0;
}
*/
