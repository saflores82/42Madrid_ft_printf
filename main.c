/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:09:53 by saflores          #+#    #+#             */
/*   Updated: 2024/07/18 11:28:10 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"

#define COLOR_VERDE  "\x1b[32m"
#define COLOR_AZUL   "\x1b[34m"
#define COLOR_RESET  "\x1b[0m" 

int main() 
{
    char c = 'A';
    char *str = "Hello, World!";
    void *ptr = str;
    void *pitr = 0;
    int num = 42;
    unsigned int u_num = 1000;
    int negative = -42;

    printf("\x1b[32m___printfChar: %c\x1b[0m\n", c);
    ft_printf("ft_printfChar: %c\n", c);
    printf("\x1b[32m___printfString: %s\x1b[0m\n", str);
    ft_printf("ft_printfString: %s\n", str);
    printf("\x1b[32m___printfPointer: %p\x1b[0m\n", ptr);
    ft_printf("ft_printfPointer: %p\n", ptr);
    printf("\x1b[32m___printfPuntero Nulo: %p\x1b[0m\n", pitr);
    ft_printf("ft_printfPuntero Nulo: %p\n", pitr);
    printf("\x1b[32m___printfDecimal: %d\x1b[0m\n", num);
    ft_printf("ft_printfDecimal: %d\n", num);
    printf("\x1b[32m___printfInteger: %i\x1b[0m\n", num);
    ft_printf("ft_printfInteger: %i\n", num);
    printf("\x1b[32m___printfUnsigned: %u\x1b[0m\n", u_num);
    ft_printf("ft_printfUnsigned: %u\n", u_num);
    printf("\x1b[32m___printfHex (low..): %x\x1b[0m\n", u_num);
    ft_printf("ft_printfHex (low..): %x\n", u_num);
    printf("\x1b[32m___printfHex (up...): %X\x1b[0m\n", u_num);
    ft_printf("ft_printfHex (up...): %X\n", u_num);
    printf("\x1b[32m___printfNegative: %d\x1b[0m\n", negative);
     ft_printf("ft_printfNegative: %d\n", negative);
    printf("\x1b[32m___printfPercent: %%\x1b[0m\n");
    ft_printf("ft_printfPercent: %%\n");
       
    char input[1000];
   printf("\x1b[34mIntroduce tu texto:\x1b[0m");
    fgets(input, sizeof(input), stdin);

    /*Eliminamos el salto de línea final generado por fgets*/
    input[ft_strlen(input) - 1] = '\0';

    printf("\n___printf:\n");
    printf("%s\n", input);

    printf("\nft_printf:\n");
    ft_printf("%s\n", input);

    return (0);
}