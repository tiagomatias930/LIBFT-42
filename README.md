
---
# Libft

## Descrição

Libft é uma biblioteca em C que reimplementa várias funções da biblioteca padrão do C, além de incluir algumas funções utilitárias adicionais. Este projeto faz parte do currículo da 42 e tem como objetivo solidificar o entendimento dos fundamentos da linguagem C e da programação em geral.

## Estrutura do Projeto

O projeto está organizado da seguinte forma:

```
libft/
├── includes/
│   └── libft.h
├── srcs/
│   ├── ft_*.c
│   └── ...
├── Makefile
└── README.md
```

- `includes/libft.h`: Arquivo de cabeçalho com as declarações das funções.
- `srcs/`: Diretório contendo as implementações das funções.
- `Makefile`: Arquivo para compilar a biblioteca.

## Funcionalidades

A biblioteca inclui funções para:

### Manipulação de Strings

- `ft_strlen`: Calcula o comprimento de uma string.
- `ft_strcpy`: Copia uma string para outra.
- `ft_strncpy`: Copia um número especificado de caracteres de uma string para outra.
- `ft_strdup`: Duplica uma string.
- `ft_strcat`: Concatena duas strings.
- `ft_strncat`: Concatena um número especificado de caracteres de duas strings.
- `ft_strchr`: Encontra a primeira ocorrência de um caractere em uma string.
- `ft_strrchr`: Encontra a última ocorrência de um caractere em uma string.
- `ft_strstr`: Encontra a primeira ocorrência de uma substring em uma string.
- `ft_strnstr`: Encontra a primeira ocorrência de uma substring em uma string, até um limite de caracteres.
- `ft_strcmp`: Compara duas strings.
- `ft_strncmp`: Compara duas strings até um número especificado de caracteres.
- `ft_atoi`: Converte uma string em um inteiro.
- `ft_itoa`: Converte um inteiro em uma string.

### Manipulação de Memória

- `ft_memset`: Preenche uma área de memória com um valor constante.
- `ft_memcpy`: Copia uma área de memória para outra.
- `ft_memccpy`: Copia uma área de memória para outra até encontrar um caractere específico.
- `ft_memmove`: Move uma área de memória para outra.
- `ft_memchr`: Encontra a primeira ocorrência de um valor em uma área de memória.
- `ft_memcmp`: Compara duas áreas de memória.
- `ft_bzero`: Zera uma área de memória.

### Funções Adicionais

- `ft_putchar`: Escreve um caractere na saída padrão.
- `ft_putstr`: Escreve uma string na saída padrão.
- `ft_putendl`: Escreve uma string seguida de uma nova linha na saída padrão.
- `ft_putnbr`: Escreve um número inteiro na saída padrão.
- `ft_putchar_fd`: Escreve um caractere em um descritor de arquivo.
- `ft_putstr_fd`: Escreve uma string em um descritor de arquivo.
- `ft_putendl_fd`: Escreve uma string seguida de uma nova linha em um descritor de arquivo.
- `ft_putnbr_fd`: Escreve um número inteiro em um descritor de arquivo.

### Funções de Lista Ligada

- `ft_lstnew`: Cria uma nova lista.
- `ft_lstdelone`: Deleta um elemento da lista.
- `ft_lstdel`: Deleta e libera uma lista inteira.
- `ft_lstadd`: Adiciona um novo elemento no início da lista.
- `ft_lstiter`: Itera sobre os elementos de uma lista e aplica uma função a cada elemento.
- `ft_lstmap`: Cria uma nova lista resultante da aplicação de uma função a cada elemento da lista original.

## Como Compilar

Para compilar a biblioteca, use o comando:

```bash
make
```

Isso gerará o arquivo `libft.a`, que pode ser incluído em outros projetos.

## Como Usar

Inclua o cabeçalho da Libft no seu projeto:

```c
#include "libft.h"
```

E, ao compilar seu projeto, adicione a biblioteca Libft:

```bash
gcc -o my_program my_program.c -L. -lft
```
---
