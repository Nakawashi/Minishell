/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:16:07 by nakawashi         #+#    #+#             */
/*   Updated: 2022/07/18 16:45:37 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/minishell.h"

int	main(int argc, char **argv, char **envp)
{
	(void)	argc;
	(void)	argv;
	(void)	envp;
	char	*input;

	input = NULL;
	while (1){
		input = readline("🍼 Minishell 🥥 % ");
		add_history(input);
		printf("%s\n", input);
	}
	free(input);
	return (0);
}
