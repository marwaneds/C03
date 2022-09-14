/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-faqu <mel-faqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:43:00 by mel-faqu          #+#    #+#             */
/*   Updated: 2022/09/14 10:32:54 by mel-faqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	char	curr1;
	char	curr2;

	i = 0;
	curr1 = s1[i];
	curr2 = s2[i];
	while (curr1 != '\0' || curr2 != '\0')
	{
		curr1 = s1[i];
		curr2 = s2[i];
		if (curr1 != curr2)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
