#include <stdio.h>

int main() {
    int categoria;
    printf("Digite a categoria do livro (1-5): ");
    scanf("%d", &categoria);

    // Estrutura de seleÃ§Ã£o com switch
    switch (categoria) {
        case 1:
            printf("Categoria: ficção\n");
            break;
        case 2:
            printf("Categoria: nao ficção\n");
            break;
        case 3:
            printf("Categoria: biografia\n");
            break;
        case 4:
            printf("Categoria: tecnologia\n");
            break;
        case 5:
           printf("Categoria: arte\n");
        break;
        default:
            printf("Categoria invalida!\n");
    }

    // Loop for para listar livros de uma categoria 

    printf("Listando livros da categoria %d:\n", categoria);
    for (int i = 1; i <= 3; i++) {
        printf("Livro %d da categoria %d\n", i, categoria);


        return 0;
    }