#include <stdio.h>
#include<time.h>


void mostrarRegra (){
	int comeca = 10;

	printf("\n");
	printf("\n");
	printf(" \t========= REGRAS DO JOGO  ============");
	printf("\n");
	printf("\n");	

	printf("    1. Um numero sera sorteado entre 0 e 10 .");
	printf("\n");
	printf("\n");

	printf("    2. voce tem 3 tentativas para acertar o numero .");
	printf("\n");
	printf("\n");
	
	printf("    Boa Sorte !!!" );
	printf("\n");
	printf("\n");

	while ( comeca != 0){	

		printf("\n");
		printf("    Digite 0 para comecar : ");
		scanf("%d",&comeca);
	}
	
	system("cls");
}

void jogar(){
	
	srand(time(NULL));
	int numeroSorteado = rand()%10;
	int tentativa = 3 ;
	int num;
	

	printf("\n");
	printf("\n");
	printf(" \t========= ADIVINHE O NUMERO   ============");
	printf("\n");
	printf("\n");	

	while(tentativa > 0){
	
		printf("       Informe um numero : ");	
    	scanf("%d",&num);
		tentativa--;
		printf("\n");
		printf("\n");
		
		if(num == numeroSorteado){
			
			printf("       Voce acertou o numero !!! ");
			printf("\n");
			printf("\n");
			break;
		
		}else if(num > numeroSorteado && tentativa !=0){
			printf("       O numero sorteado eh menor");
			printf("\n");
			printf("\n");
		
		}else if(num < numeroSorteado && tentativa !=0){
			printf("       O numero sorteado eh maior");
			printf("\n");
			printf("\n");
		}
	
	}
	
	if(numeroSorteado != num && tentativa == 0){
		printf(" \t========= ADIVINHE O NUMERO   ============");
		printf("\n");
		printf("\n");
		printf("       O numero sorteado era :  %d",numeroSorteado );

	}
	
}

void main(){
	mostrarRegra();
	jogar();
	
}
