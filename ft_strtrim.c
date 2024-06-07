/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etien <etien@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:04:29 by etien             #+#    #+#             */
/*   Updated: 2024/06/07 11:25:33 by etien            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	start_index;
	int	end_index;

	start_index = 0;
	end_index = ft_strlen(s1) - 1;
	while(match_set(set, s1[start_index]))
		start_index++;
	while(match_set(set, s1[end_index]))
		end_index--;

	USE END INDEX TO FIND LEN VALUE
	char	*ft_substr(char const *s, unsigned int start, size_t len)

	if (!str)
		return (NULL);



	Have a function that identifies index of
	use substr to trim
	start will be identified when running through string in order
	length will be identified when running through string in reverse




	return (str);
}

static int	match_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
