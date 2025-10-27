#include <stdio.h> //biblioteca de comunicação com o usúario
#include <stdlib.h>//biblioteca de alocação de espaço em memória
#include <locale.h>//biblioteca de alocações de texto por região

int main()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{

      system("cls");

	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	printf("### cartório da ebac ###\n\n");
	printf("Escolha a opção desejada de menu\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n");
	printf("Opção: "); //fim do menu
	
	scanf("%d", &opcao); //armazenando a escolha do usúario
	
	system("cls");
	
	
	switch(opcao)
	{
		case 1:
		printf("Você escolheu o registro de nomes!\n");
		system("pause");
		break;
			
		case 2:
    	printf("Você escolheu consultar nomes!\n");
    	system("pause");
    	break;
    	
    	case 3:
    	printf("você escolheu deletar nomes!\n");
		system("pause");
		break;
    		
		default:
		printf("Essa opção não está dísponivel!\n");
		system("pause");
		break;
				
	}
	
	
	
 
	 }	
}
