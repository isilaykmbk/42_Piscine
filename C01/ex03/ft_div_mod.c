/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikombak <ikombak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:31:18 by ikombak           #+#    #+#             */
/*   Updated: 2024/02/03 10:27:08 by ikombak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main()
{
    int division;
    int modulo;
    ft_div_mod(14, 3, &division, &modulo);
    printf("bolum %d\n", division);
    printf("kalan: %d\n", modulo);

}
*/