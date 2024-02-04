/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikombak <ikombak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 01:36:52 by ikombak           #+#    #+#             */
/*   Updated: 2024/02/03 10:28:41 by ikombak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;	
	int	temp;
	int	a;

	a = 0;
	while (a <= size)
	{
		i = 0;
		while (i <= size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		a++;
	}
}

/*
int main()
{
    int tab[6] = {2, 10, 8, 3, 4, 5};
	int size = 6;
	int k;

	k=0;
	ft_sort_int_tab(tab, size);
	while (k <= 5)
	{
		printf("%d \n", tab[k]);
		k++;
	}
	
    return(0);

}
*/