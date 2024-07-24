make
cc -Wall -Wextra -Werror main.c libftprintf.a -I libft
./a.out

make 
cc main.c libftprintf.a -I libft
./a.out

//MAIN.C para casos NORMALES

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

//MAIN de pruebas para casos EXTREMOS
//Si dejamos los flags aparecen errores pero no son mios son de la funcion printf original por que estamos mandando argumentos no pensados para esta funcion, 

int main ()
{
    int x;
    int y;
    
//Varias conversiones simultaneas
    y = ft_printf("%s hola %d\n", NULL, 3);
    x = printf("%s hola %d\n", NULL, 3);
printf("Original: %d, Mio: %d\n", x, y);

//Numeros normal
    y = ft_printf("%s%s%d\n", "Hola"," Mundo", 4);
    x = printf("%s%s%d\n", "Hola"," Mundo", 4);
printf("Original: %d, Mio: %d\n", x, y);

//Numeros que se va el warning es del prontf original
//Quitamos los flags y el compilador gestiona para convertirlo en un int
    y = ft_printf("%d\n", 462731637812313);
    x = printf("%d\n", 462731637812313);
printf("Original: %d, Mio: %d\n", x, y);

//Sumas
    y = ft_printf("%d\n", 46273163 + 7812313);
    x = printf("%d\n", 46273163 + 7812313);
printf("Original: %d, Mio: %d\n", x, y);

//Numero muy pequeño
    y = ft_printf("%d\n", -462731637812313);
    x = printf("%d\n", -462731637812313);
printf("Original: %d, Mio: %d\n", x, y);

//Que sea unsigned "Lo gestiona el compilador "
    y = ft_printf("%u\n", -462731637812313);
    x = printf("%u\n", -462731637812313);    
printf("Original: %d, Mio: %d\n", x, y);

//Unsigned con -1 debe sacar el MAX de los Unsigned
    y = ft_printf("%u\n", -1);
    x = printf("%u\n", -1);
printf("Original: %d, Mio: %d\n", x, y);

//Max int
   y = ft_printf("%d\n", 2147483647);
    x = printf("%d\n", 2147483647);
printf("Original: %d, Mio: %d\n", x, y);

//Min int
   y = ft_printf("%d\n", -2147483648);
    x = printf("%d\n", -2147483648);
printf("Original: %d, Mio: %d\n", x, y);

//Min hexadecimal
    y = ft_printf("%x\n", -2147483648);
    x = printf("%x\n", -2147483648);
printf("Original: %d, Mio: %d\n", x, y);

//Max hexadecimal
    y = ft_printf("%x\n", 2147483647);
    x = printf("%x\n", 2147483647);
printf("Original: %d, Mio: %d\n", x, y);

//hexadecimal con -1
    y = ft_printf("%x\n", -1);
    x = printf("%x\n", -1);
 printf("Original: %d, Mio: %d\n", x, y);

//Si los paso como *puntero
    y = ft_printf("%p\n", 2147483647);
    x = printf("%p\n", 2147483647);
printf("Original: %d, Mio: %d\n", x, y);

//*Puntero nulo
    y = ft_printf("%p\n", 0);
    x = printf("%p\n", 0);
printf("Original: %d, Mio: %d\n", x, y);

//*Puntero NULL
    y = ft_printf("%p\n", NULL);
    x = printf("%p\n", NULL);
printf("Original: %d, Mio: %d\n", x, y);

//*pntero con -1
    y = ft_printf("%p\n", -1);
    x = printf("%p\n", -1);
printf("Original: %d, Mio: %d\n", x, y);

//Imprimir varios %
    y = ft_printf("%%%%%%\n");
    x = printf("%%%%%%\n");
printf("Original: %d, Mio: %d\n", x, y);

//Cadena vacia
    y = ft_printf("%s\n", "");
    x = printf("%s\n", "");
printf("Original: %d, Mio: %d\n", x, y);

//Cadena NULL
    y = ft_printf("%s\n", NULL);
    x = printf("%s\n", NULL);
printf("Original: %d, Mio: %d\n", x, y);

//Por la diferente gestion del buffer que exige el subject cuando hay un fallo no van a imprimir lo mismo, el original no impriiria nada pero el mio devuelve -1.

}
