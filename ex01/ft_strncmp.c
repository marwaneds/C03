/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-faqu <mel-faqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:50:15 by mel-faqu          #+#    #+#             */
/*   Updated: 2022/09/14 11:08:15 by mel-faqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && (*s1 == *s2) && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
