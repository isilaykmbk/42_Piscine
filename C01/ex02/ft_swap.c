/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikombak <ikombak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:10:36 by ikombak           #+#    #+#             */
/*   Updated: 2024/02/03 10:27:05 by ikombak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}

/*
int main()
{
    int a = 3;
    int b = 4;
    int *ptra = &a;
    int *ptrb = &b ;

    ft_swap(ptra, ptrb);
    printf("a: %d\n", a);
    printf("b: %d", b);
}
*/