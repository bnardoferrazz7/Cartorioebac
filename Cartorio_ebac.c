#include <stdio.h> //biblioteca de comunica��o com o us�ario
#include <stdlib.h>//biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>//biblioteca de aloca��es de texto por regi�o

int main()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{

      system("cls");

	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	printf("### cart�rio da ebac ###\n\n");
	printf("Escolha a op��o desejada de menu\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n");
	printf("Op��o: "); //fim do menu
	
	scanf("%d", &opcao); //armazenando a escolha do us�ario
	
	system("cls");
	
	
	switch(opcao)
	{
		case 1:
		printf("Voc� escolheu o registro de nomes!\n");
		system("pause");
		break;
			
		case 2:
    	printf("Voc� escolheu consultar nomes!\n");
    	system("pause");
    	break;
    	
    	case 3:
    	printf("voc� escolheu deletar nomes!\n");
		system("pause");
		break;
    		
		default:
		printf("Essa op��o n�o est� d�sponivel!\n");
		system("pause");
		break;
				
	}
	
	
	
 
	 }	
}
