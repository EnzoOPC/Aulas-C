#include <stdio.h>
#include <locale.h>

//struct Livro {
//	char titulo[30];
//	int registro;
//	float preco;
//};


//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	
//	struct Livro livro1;
//	
//	printf("Digite o nome do livro a ser cadastrado: ");
//	scanf("%s", livro1.titulo);
//	
//	printf("\nDigite o c�digo do livro a ser cadastrado: ");
//	scanf("%d", &livro1.registro);
//	
//	printf("\nDigite o pre�o do livro a ser cadastrado: ");
//	scanf("%f", &livro1.preco);
//	
//	printf("Livros cadastrado(s): %s", livro1.titulo);
//	printf("\nDados do livro %s:\n", livro1.titulo);
//	printf("T�tulo: %s\n", livro1.titulo);
//	printf("C�digo: %d\n", livro1.registro);
//	printf("Pre�o: %.2f\n", livro1.preco);
//}


struct Livro {
	char titulo[30];
	int registro;
	float preco;
};


struct Livro inclui() {
	
	struct Livro livro;
	
	printf("\nsDigite o nome do livro a ser cadastrado: ");
	scanf("%s", livro.titulo);
	
	printf("\nDigite o c�digo do livro a ser cadastrado: ");
	scanf("%d", &livro.registro);
	
	printf("\nDigite o pre�o do livro a ser cadastrado: ");
	scanf("%f", &livro.preco);
	
	return livro;
}

void mostra(struct Livro livro) {
	printf("\nLivro(s) cadastrado(s): %s", livro.titulo);
	printf("\nDados do livro %s:\n", livro.titulo);
	printf("T�tulo: %s\n", livro.titulo);
	printf("C�digo: %d\n", livro.registro);
	printf("Pre�o: %.2f\n", livro.preco);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	struct Livro livro1 = inclui();
	
	mostra(livro1);
	
	struct Livro livro2 = inclui();
	
	mostra(livro2);
}






























