/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:51:13 by flhember          #+#    #+#             */
/*   Updated: 2019/03/28 15:57:49 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main()
{

	int	nb = -15236;


	printf("test = %#50.20o|\n", nb);
	ft_printf("test = %#50.20o|\n", nb);

	printf("test o:%o|\n", nb);
	ft_printf("test o:%o|\n", nb);
	printf("hash:%#o|\n", nb);
	ft_printf("hash:%#o|\n", nb);
	printf("precision / grande:%.5o|\n", nb);
	ft_printf("precision / grande:%.5o|\n", nb);
	printf("Prec + hash / grande:%#.5o|\n", nb);
	ft_printf("Prec + hash / grande:%#.5o|\n", nb);
	printf("Prec + hash / petite:%#.1o|\n", nb);
	ft_printf("Prec + hash / petite:%#.1o|\n", nb);
	printf("Prec + 0:%0.5o|\n", nb);
	ft_printf("Prec + 0:%0.5o|\n", nb);
	printf("Prec + minus:%-.5o|\n", nb);
	ft_printf("Prec + minus:%-.5o|\n", nb);
	printf("Size:%5o|\n", nb);
	ft_printf("Size:%5o|\n", nb);
	printf("size + prec:%7.3o|\n", nb);
	ft_printf("size + prec:%7.3o|\n", nb);
	printf("size + minus:%-5o|\n", nb);
	ft_printf("size + minus:%-5o|\n", nb);
	printf("size + zero:%05o|\n", nb);
	ft_printf("size + zero:%05o|\n", nb);
	printf("size + zero + hash:%#05o|\n", nb);
	ft_printf("size + zero + hash:%#05o|\n", nb);
	printf("size + zero + prec:%05.3o|\n", nb);
	ft_printf("size + zero + prec:%05.3o|\n", nb);
	printf("size + minus + prec:%-5.3o|\n", nb);
	ft_printf("size + minus + prec:%-5.3o|\n", nb);
	printf("size + hash + zero + prec:%#05.3o|\n", nb);
	ft_printf("size + hash + zero + prec:%#05.3o|\n", nb);
	printf("size + hash + zero + prec:%0#5.3o|\n", nb);
	ft_printf("size + hash + zero + prec:%0#5.3o|\n", nb);
	printf("size + hash + minus + prec:%-#7.3o|\n", nb);
	ft_printf("size + hash + minus + prec:%-#7.3o|\n", nb);

	return (0);
}
