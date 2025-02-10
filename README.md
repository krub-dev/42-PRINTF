<h1 align="center">
  <img src="https://iili.io/2od44kv.png" alt="libft krub" width="1200" height="auto" style="align: bottom;"> 
</h1>

## Descripción

Este proyecto consiste en desarrollar una función personalizada, `ft_printf()`, que imita el comportamiento de la función `printf()` de la biblioteca estándar de C. La función `ft_printf()` es una parte integral de la librería LIBFT, diseñada para proporcionar una serie de funciones de utilidad que facilitan el desarrollo de programas en C. Al igual que las otras funciones en LIBFT, `ft_printf()` está diseñada para ser modular y fácilmente integrable en proyectos de C, ofreciendo una alternativa robusta y extensible a la función `printf()` original.

🇬🇧 [Read in English](README_EN.md)

## Características Principales

La reprogramación de `printf()` implica el manejo de un número variable de argumentos y la implementación de varias conversiones de formato, como caracteres, cadenas, enteros, números hexadecimales, punteros y el carácter de porcentaje. La función `ft_printf()` debe ser capaz de manejar estos formatos de manera eficiente y precisa, replicando el comportamiento esperado de `printf()` en las condiciones dadas en el subject.

### Manipulación de Formato

- **%c**: Imprime un solo carácter.
- **%s**: Imprime una cadena de caracteres.
- **%p**: Imprime el valor de un puntero en formato hexadecimal.
- **%d** y **%i**: Imprimen un número entero en base 10.
- **%u**: Imprime un número entero sin signo en base 10.
- **%x** y **%X**: Imprimen un número hexadecimal en minúsculas y mayúsculas, respectivamente.
- **%%**: Imprime el carácter de porcentaje.

## Funciones Clave

El proyecto se estructura alrededor de varias funciones auxiliares que trabajan en conjunto para proporcionar la funcionalidad pedida en el subject del proyecto `ft_printf()`:

- **ft_check_type()**: Esta función es responsable de determinar el tipo de dato a imprimir basándose en el carácter de formato proporcionado y llama a la función apropiada para manejar dicho tipo.

### Funciones de Impresión

- **ft_put_chr()**: Imprime un único carácter en la salida estándar.
- **ft_put_str()**: Imprime una cadena completa en la salida estándar, con manejo especial para cadenas nulas.
- **ft_put_p()**: Imprime el valor de un puntero en formato hexadecimal, precedido por "0x", incluyendo el manejo de punteros nulos.
- **ft_put_di()**: Imprime un número entero decimal, con soporte para números negativos y el valor mínimo de int.
- **ft_put_u()**: Imprime un número entero sin signo en decimal.
- **ft_put_hex()**: Imprime un número en formato hexadecimal, permitiendo tanto minúsculas como mayúsculas según el especificador de formato.
