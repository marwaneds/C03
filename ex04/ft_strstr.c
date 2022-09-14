/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-faqu <mel-faqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:20:06 by mel-faqu          #+#    #+#             */
/*   Updated: 2022/09/14 11:49:04 by mel-faqu         ###   ########.fr       */
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
	while (to_find[i])
		i++;
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
