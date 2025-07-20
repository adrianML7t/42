/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:40:41 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:10:16 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **save_stringmat(char *s, char del, int rows);
int *fill_rows(char **smat, char *s, char *c, int rows);
int get_rows(char *s, char c);
int get_cols(char *s, char c, int *pos);
void	ft_clean(char **array);

/*char **ft_split(char const *s, char c)
{
    char **string_array;
    int i;
    int j;

    i = 0;
    j = 0;
    string_array = NULL;
    string_array = save_stringmat(ss, c, get_rows(ss, c));
    if (string_array == NULL)
        return (NULL);
    while (*s != '\0')
    {
        if(*s != c)
        {
            string_array[i][j] = *s;
            j++;
        }
        if(*s == c)
        {
            i++;
            j = 0;
        }
        s++;
    }
    return (string_array);
}*/

char **ft_split(char const *s, char c)
{
   char **smat;
   
   smat = save_stringmat(s, c, get_rows(s, c));
   return (smat);
}

char **save_stringmat(char *s, char del, int rows)
{
	char	**smat;

	smat = malloc (sizeof (char *) * rows);
	if (!smat)
		return (NULL);
	smat[rows - 1] = NULL;
	if (!fill_rows(smat, s, del))
		return (NULL);
	return (smat);
}

int *fill_rows(char **smat, char *s, char *c, int rows)
{
	int n;
	int start;
	int end;
	
	end = 0;
	n = 0;
	while (n < rows)
	{
		start = end;
		while (s[start] != '\0' && s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end] != '\0')
			end++;
		smat[n] = ft_substr(s, start, end - start);
		if (!smat[n])
		{
			ft_clean(smat);
			return (1);
		}
		n++;
	}
	return (1);

}

int get_rows(char *s, char c)
{
	int i;
	int rows;

	i = 0;
	rows = 0;
	if (s[0] == '\0')
		return (1);
	if (s[0] != c)
			rows = 1;
	i++;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (s[i - 1] == c))
			rows++;
		i++;
	}
	rows++;
	return (rows);
}
/*rows + 1, para el caracter nulo de la ultima fila*/

int get_cols(char *s, char c, int *pos)
{
	int cols;

	cols = 0;
	if (s[0] != c)
	{
		cols++;
		*pos++;
	}
	while (s[*pos] != '\0')
	{
		if (s[*pos] == c)
			break;
		if (s[*pos - 1] == c)
			while (s[*pos] != c)
				*pos++;
		*pos++;
	}
    *pos++;
	cols = *pos;
	return (cols);
}

void	ft_clean(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free (array[i]);
		i++;
	}
	free (array);
}

/*la funcion funciona correctamente
la memoria no se reserva bien*/