/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-faqu <mel-faqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:20:06 by mel-faqu          #+#    #+#             */
/*   Updated: 2022/09/14 12:17:35 by mel-faqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	i;
	int	a;

	n = 0;
	i = 0;
	a = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[n])
	{
		a = 0;
		while (str[n] && str[n++] == to_find[a++])
		{
			if (to_find[a] == '\0')
				return (&str[n - a]);
		}
	}
	return (0);
}
