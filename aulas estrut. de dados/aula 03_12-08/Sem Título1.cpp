#include <stdio.h>
#include <locale.h>


//int main() {
//	setlocale(LC_ALL,"Portuguese");
//	int t, b, r,  qtd;
//	char tipo;
//	t= b= r = 0;
//	
//	printf("Selecione o tipo de vinho. (s para sair)");
//	
//	do
//	{
//		printf("\n(T) - Tinto, (B) - Branco, (R) - Rosé. --> ");
//		fflush (stdin);
//		scanf("%c", & tipo);
//		
//		switch (tipo){
//		
//			case 't':
//			case 'T':
//				t++;
//				qtd++;
//				break;
//			
//			case 'b':
//			case 'B':
//				b++;
//				qtd++;
//				break;
//				
//			case 'r':
//			case 'R':
//				r++;
//				qtd++;
//				break;
//				
//			default:
//				if (tipo != 's' && tipo != 'S') printf("Caractere inválido.");
//				break;
//			}
//			
//		
//	} while(tipo != 's' && tipo != 'S');
//	
//	printf("\nQuatidade total de vinhos: %d", qtd);
//	printf("\nQuatidade total de vinhos tinto: %d", t);
//	printf("\nQuatidade total de vinhos branco: %d", b);
//	printf("\nQuatidade total de vinhos rosé: %d", r);
//	
//}


//int main() {
//    for(int i=0;i<11;i++){
//        printf("%d\n",i);
//    }
//}


//int main() {
//	for(int i = 0; i<13; i+=2){
//		printf("%d\n", i);
//	}
//}

//int main() {
//	int i, f;
//	printf("Digite o valor incicial: ");
//	scanf("%d", & i);
//	printf("Digite o valor final: ");
//	scanf("%d", & f);
//
//    for(i; i<=f; i++){
//        printf("%d\n",i);
//    }
//}

int main() {
	for(int i = 5; i <= 50; i+=5){
		printf("%d\n", i);
	}
}



