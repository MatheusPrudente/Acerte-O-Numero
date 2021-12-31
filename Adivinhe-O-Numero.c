#include <stdio.h>
#include <time.h>
#include <ctype.h>

// mostra as regras do jogo
void mostrarRegra (){
	printf("\n\n");
	printf(" \t========= REGRAS DO JOGO  ============");
	printf("\n\n");
	printf("    1. Um numero sera sorteado entre 0 e 10 .");
	printf("\n\n");
	printf("    2. voce tem 3 tentativas para acertar o numero .");
	printf("\n\n");
	printf("    Boa Sorte !!!" );
	printf("\n\n");
	printf("    Pressione qualquer tecla para continuar . . .");
	getchar();

	system("cls");
}

//inicia o jogo 
void jogar(){
	srand(time(NULL));
	int numeroSorteado = rand()%10;
	int tentativa = 3 ;
	int num;
	
	printf("\n\n");
	printf(" \t========= ADIVINHE O NUMERO   ============");
	printf("\n\n");

	while(tentativa > 0){
		printf("       Informe um numero : ");	
    	scanf("%d",&num);
		tentativa--;
		printf("\n\n");
		
		if(num == numeroSorteado){	
			printf("       Voce acertou o numero !!! ");
			printf("\n\n");
			break;
		}else if(num > numeroSorteado && tentativa !=0){
			printf("       O numero sorteado eh menor");
			printf("\n\n");
		}else if(num < numeroSorteado && tentativa !=0){
			printf("       O numero sorteado eh maior");
			printf("\n\n");
		}
	}
	
	if(numeroSorteado != num && tentativa == 0){
		printf(" \t========= NUMERO SORTEADO   ============");
		printf("\n");
		printf("\n");
		printf("       O numero sorteado era :  %d",numeroSorteado );
	}
}

void main(){
	mostrarRegra();
	jogar();
	
}
