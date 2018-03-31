/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:27:21 by rmdaba            #+#    #+#             */
/*   Updated: 2018/03/26 15:27:23 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
	{
		if (f(*tab++))
			return (1);
	}
	return (0);
}
