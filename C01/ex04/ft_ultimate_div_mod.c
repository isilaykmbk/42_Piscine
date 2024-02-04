/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikombak <ikombak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:08:33 by ikombak           #+#    #+#             */
/*   Updated: 2024/02/03 10:27:09 by ikombak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int main()
{
    int a = 15;
    int b = 4 ;
    ft_ultimate_div_mod(&a, &b);
    printf("bolum: %d\n", a);
    printf("kalan: %d", b);

}
*/