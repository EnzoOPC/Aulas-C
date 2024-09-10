#include <stdio.h>
#include <locale.h>

// 1

//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int maior, menor, num;
//	
//	printf("Digite um número. (0 para sair do loop) ");
//	scanf("%d", & num);
//	menor = num;
//	maior = num;
//	
//	while (num != 0) {
//
//	printf("Digite um número. (0 para sair do loop) ");
//	scanf("%d", & num);
//	
//	if (num < menor && num != 0) menor = num;
//	else if (num > maior) maior = num;
//	
//	};
//	
//	printf("\nMenor número digitado: %d", menor);
//	printf("\nMaior número digitado: %d", maior);
//}


//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	int senha, teste;
//	
//	printf("Defina sua senha. ");
//	scanf("%d", & senha);
//	
//	printf("Insira a sua senha. ");
//	scanf("%d", & teste);
//	
//	do {
//		printf("Senha incorreta. Tente novamente. ");
//		scanf("%d", & teste);
//	} while(teste != senha);
//	printf("Senha correta.");
//}


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) printf("\n%d%d", i,j);
	}
}




















