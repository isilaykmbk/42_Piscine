/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikombak <ikombak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:30:26 by ikombak           #+#    #+#             */
/*   Updated: 2024/02/03 10:28:50 by ikombak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
int main()
{
    int tab[6] = {2, 10, 8, 3, 4, 5};
	int size = 6;
	int k;

	k=0;
	ft_rev_int_tab(tab, size);
	while (k <= 4)
	{
		printf("%d \n", tab[k]);
		k++;
	}
	
    return(0);
}	
*/