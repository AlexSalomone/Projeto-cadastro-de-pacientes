#include <stdio.h>
#include <stDlib.h>
#include <locale.h>
#include <string.h>

 void telaLogin(){

	setlocale(LC_ALL, "Portuguese");
    char login[15] = "Ricardo";
    char login1[15];
    char senha[15] = "1234";
    char senha1[15];        
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro

    while(!login_efetuado){
    	printf("--------------------------------------------------------------------------------\n");
		printf("\t\t\t\t TELA DE LOGIN \n\n");
		printf("--------------------------------------------------------------------------------\n\n");		
        printf("Digite seu nome de usu�rio: \n\n");
        scanf("%s", login1);

        printf("Digite a Senha: \n\n");
        scanf("%s", senha1);        

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");    
    }
};



int main() {
	
	telaLogin();
	setlocale(LC_ALL, "Portuguese");
	int num = 0;
	char nome[50];
	char cpf[50];
	char tel[50];
	char end[50];
	char dateNasc[50];
	char email[50];
	char dateDiag[50];
	char cormobi[50];
		
	
	while(num!=6) {
		
		system("cls");
		printf("--------------------------------------------------------------------------------\n");
		printf("\t\t\t CADASTRO DE PACIENTES COM COVID-19 \n\n");
		printf("--------------------------------------------------------------------------------\n\n");
		printf("1 - Novo cadastro \n");
		printf("2 - Visualisar dados do paciente \n");
		printf("3 - Modificar dados do paciente \n");
		printf("4 - Excluir dados do paciente \n");
		printf("5 - Dados do sistema \n");
		printf("6 - Sair do menu. \n");
		printf("\t\t\t * Digite uma das op��es: ");
		scanf("%d", &num);
		
		
		switch (num) {
			
			case 1: 
				system("cls");
				printf("--------------------------------------------------------------------------------\n");
				printf("\t\t\t CADASTRO DE NOVO PACIENTE \n\n");
				printf("--------------------------------------------------------------------------------\n\n");
				printf("\n");
				printf("Nome completo: \n\n");
				fflush(stdin);
				scanf("%[^\n]s", nome);
				printf("\n");
				
				printf("CPF: \n\n");
				fflush(stdin);
				scanf("%[^\n]s", cpf);
				printf("\n");
				
				printf("Telefone: \n\n");
				fflush(stdin);
				scanf("%[^\n\n]s", tel);
				printf("\n");
				
				printf("Endere�o: \n\n");
				fflush(stdin);
				scanf("%[^\n]s", end);
				printf("\n");
				
				printf("Data de nascimento: \n\n");
				fflush(stdin);
				scanf("%[^\n]s", dateNasc);
				printf("\n");
				
				printf("Email: \n\n");
				fflush(stdin);
				scanf("%[^\n]s", email);
				printf("\n");
				
				printf("Data do diagn�stico: \n\n");
				fflush(stdin);
				scanf("%[^\n]s", dateDiag);
				printf("\n");
				
				printf("Cormobidade: \n\n");
				fflush(stdin);
				scanf("%[^\n]s", cormobi);
				printf("\n");
				
				printf("\n\n");
				printf("\t\t\t CADASTRO REALIZADO COM SUCESSO! \n\n");
				system("pause");
				break;
				
			case 2:
				system("cls");
				printf("--------------------------------------------------------------------------------\n");
				printf("\t\t\t VISUALIZAR DADOS DO PACIENTE \n\n");
				printf("--------------------------------------------------------------------------------\n\n");
				printf("\n");
				printf(". Nome completo: %s\n\n", nome);
				printf(". CPF: %s \n\n", cpf);
				printf(". Telefone: %s \n\n", tel);
				printf(". Endere�o: %s \n\n", end);
				printf(". Data de nascimento: %s \n\n", dateNasc);
				printf(". Email: %s \n\n", email);
				printf(". Data do diagn�stico: %s \n\n", dateDiag);
				printf(". Cormobidade: %s \n\n", cormobi);
				system("pause");
				break;
				
			case 3:
				system("cls");
				int modifi;
				printf("--------------------------------------------------------------------------------\n");
				printf("\t\t\t VISUALIZAR DADOS DO PACIENTE \n\n");
				printf("--------------------------------------------------------------------------------\n\n");
				printf("\n");
				printf(". Nome completo: %s\n\n", nome);
				printf(". CPF: %s \n\n", cpf);
				printf(". Telefone: %s \n\n", tel);
				printf(". Endere�o: %s \n\n", end);
				printf(". Data de nascimento: %s \n\n", dateNasc);
				printf(". Email: %s \n\n", email);
				printf(". Data do diagn�stico: %s \n\n", dateDiag);
				printf(". Cormobidade: %s \n\n", cormobi);
				
				printf("--------------------------------------------------------------------------------\n");
				printf("\t\t\t MODIFICAR DADOS DO PACIENTE \n\n");
				printf("--------------------------------------------------------------------------------\n\n");
				printf("\t1. Modificar o Nome. \n");
				printf("\t2. Modificar o CPF. \n");
				printf("\t3. Modificar o Telefone. \n");
				printf("\t4. Modificar o Endere�o. \n");
				printf("\t5. Modificar o Data de Nascimento. \n");	
				printf("\t6. Modificar o Email. \n");	
				printf("\t7. Modificar o Data do diagn�stico. \n");
				printf("\t8. Modificar o Cormobidade. \n");
				printf("\t9. Modificar tudo. \n");
				scanf("%d", &modifi);
				
				if( modifi == 1 ) {
					printf(" Alterar Nome: \n");
					scanf("%s", &nome);
				} else if ( modifi == 2 ) {
					printf(" Alterar CPF: \n");
					scanf("%s", &cpf); 	
				} else if ( modifi == 3 ) {
					printf(" Alerar Telefone: \n");
					scanf("%s", &tel); 	
				} else if ( modifi == 4 ) {
					printf(" Alerar Endere�o: \n");
					scanf("%s", &end); 	
				} else if ( modifi == 5 ) {
					printf(" Alerar Data de Nascimento: \n");
					scanf("%s", &dateNasc); 	
				} else if ( modifi == 6 ) {
					printf(" Alerar Email: \n");
					scanf("%s", &email); 	
				} else if ( modifi == 7 ) {
					printf(" Alerar Data do diagn�stico: \n");
					scanf("%s", &dateDiag); 	
				} else if ( modifi == 8 ) {
					printf(" Alerar Cormobidade: \n");
					scanf("%s", &cormobi); 	
				}
				 else if( modifi == 9 )	{
				 	printf("NOVO CADASTRO: \n\n");
				 	printf("\n");
					printf("Nome completo: \n\n");
					fflush(stdin);
					scanf("%[^\n]s", nome);
					printf("\n");
					
					printf("CPF: \n\n");
					fflush(stdin);
					scanf("%[^\n]s", cpf);
					printf("\n");
					
					printf("Telefone: \n\n");
					fflush(stdin);
					scanf("%[^\n\n]s", tel);
					printf("\n");
					
					printf("Endere�o: \n\n");
					fflush(stdin);
					scanf("%[^\n]s", end);
					printf("\n");
					
					printf("Data de nascimento: \n\n");
					fflush(stdin);
					scanf("%[^\n]s", dateNasc);
					printf("\n");
					
					printf("Email: \n\n");
					fflush(stdin);
					scanf("%[^\n]s", email);
					printf("\n");
					
					printf("Data do diagn�stico: \n\n");
					fflush(stdin);
					scanf("%[^\n]s", dateDiag);
					printf("\n");
					
					printf("Cormobidade: \n\n");
					fflush(stdin);
					scanf("%[^\n]s", cormobi);
					printf("\n");
					
					printf("\n\n");
					printf("\t\t\t CADASTRO REALIZADO COM SUCESSO! \n\n");
				 } else {
				 	printf("Op��o inv�lida! \n\n");
				 };
				 system("pause");
				 break;
				 
			case 4:
				system("cls");
				int excluir;
				printf(". Nome completo: %s\n\n", nome);
				printf(". CPF: %s \n\n", cpf);
				printf(". Telefone: %s \n\n", tel);
				printf(". Endere�o: %s \n\n", end);
				printf(". Data de nascimento: %s \n\n", dateNasc);
				printf(". Email: %s \n\n", email);
				printf(". Data do diagn�stico: %s \n\n", dateDiag);
				printf(". Cormobidade: %s \n\n", cormobi);
				
				printf("\n EXCLUIR DADOS DO PACIENTE. \n");
				printf("\t1 - EXCLUIR... \n\t2 - N�O EXCLUIR... \n");
				scanf("%d", &excluir);
				
				if(excluir == 1) {
					memset(nome,0,sizeof(nome));
					memset(cpf,0,sizeof(cpf));
					memset(tel,0,sizeof(tel));
					memset(end,0,sizeof(end));
					memset(dateNasc,0,sizeof(dateNasc));
					memset(email,0,sizeof(email));
					memset(dateDiag,0,sizeof(dateDiag));
					memset(cormobi,0,sizeof(cormobi));
					printf("TODOS OS DADOS EXCLUIDOS!. \n");
				} else {
					printf("DADOS NAO EXCLUIDOS!");
				};
				system("pause");
				break;
				
			case 5:
				printf("\n\n\t\t\t SISTEMA EM C (UNIP) \n\n");
				system("pause");
				break;						
					
		}
	};
	system("pause");
	return 0;	
}


