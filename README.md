<div align="center">
    <h1>Libft</h1>
    <img src="https://raw.githubusercontent.com/gusgonza42/my-utils-gusgonza/main/ft_badges_42/badge_00_libft_500px.png" style="width: 150px; height: 150px;">
<div>Estado</div>

[![Build Status](https://img.shields.io/static/v1?label=Build%20Status&message=100%20success&color=success)](https://github.com/yowcloud/Libft)
</div>

- - -


## 💡 Acerca del Proyecto

> _El proyecto Libft es la primera tarea de la piscina de 42. Su objetivo es recodificar varias funciones estándar de la biblioteca C, así como otras funciones útiles para su uso futuro en otros proyectos de 42._

Este proyecto te permite familiarizarte con la implementación de funciones básicas en C, entender cómo funcionan las estructuras de datos y prácticas comunes, y mejorar tus habilidades de programación en general.

Para obtener información detallada sobre los requisitos obligatorios del proyecto, consulta el [**Subject**](https://github.com/gusgonza42/Libft/blob/main/Libft_es_subject.pdf).

## Contenido

La biblioteca incluye implementaciones de funciones en las siguientes categorías:

- Funciones de manejo de cadenas (`ft_strlen`, `ft_strcpy`, `ft_strdup`, etc.).
- Funciones de manejo de memoria (`ft_memset`, `ft_memcpy`, `ft_memalloc`, etc.).
- Funciones de manejo de listas (`ft_lstnew`, `ft_lstadd`, `ft_lstmap`, etc.).
- Otras funciones útiles (`ft_putchar`, `ft_putstr`, `ft_putnbr`, etc.).

## 🛠️ Uso

### Requisitos

El proyecto está escrito en lenguaje C y requiere el compilador **gcc** y las **bibliotecas estándar de C** para funcionar correctamente.

### Instrucciones

**1. Uso en tu código**

Para utilizar `Libft` en tu código, incluye su encabezado en tus archivos de código fuente:

```C
#include "libft.h"
```

Asegúrate de que todos los archivos necesarios estén incluidos en tu compilación. No se requiere una bandera específica para este proyecto.

## 📋 Ejemplos de Uso

Puedes utilizar las funciones de `Libft` de manera similar a las funciones estándar de la biblioteca C:

```C
#include "libft.h"
#include <stdio.h>

int main() {
    char *str = "Hello, world!";
    int len = ft_strlen(str);
    printf("Longitud de la cadena: %d\n", len);
    return 0;
}
```

Compila tu programa como lo harías normalmente con `gcc`:

```shell
gcc -Wall -Wextra -Werror tu_programa.c libft.a -o programa
```

Ejecuta tu programa compilado:

```shell
./programa
```
