/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:26:54 by fgunay            #+#    #+#             */
/*   Updated: 2023/02/06 20:32:46 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int	main()
{
	int	nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}
