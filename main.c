#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




void telaInicial();
void acessarPfsense();
void opInvalida();

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int loja =0;
	system("color 8");
	do{
		telaInicial(&loja);
		
		
		acessarPfsense(loja);
	}while(loja != 0);
	
	printf("\n\n\tVocê saiu do sistema!");
	
	
	return 0;
}


void telaInicial(int *loja){
	system("cls");
	printf("\n\t-------------------------------");
	printf("\n\t| Ultima loja acessada   %d    |",(*loja));
	printf("\n\t-------------------------------");
	
	
	printf("\n\tDigite a loja que deseja acessar: ");
	scanf("%d",&(*loja));
	fflush(stdin);
	
	
}

void acessarPfsense(loja){
	char escolha[20],chrome[15]="start chrome ",juntar[35];
	printf("\n\tÁrea pfsense");
	
		switch(loja){
		case 5:{
	
			sprintf(escolha,"%s","177.23.150.250:8081");
		
			break;
		}
		case 7:{
			sprintf(escolha,"%s","177.23.151.38:8081");
			
			break;
		}
		case 8:{
			sprintf(escolha,"%s","177.23.148.46:8081");
			
			break;
		}
		case 12:{
			sprintf(escolha,"%s","177.23.148.162:8081");
			
			break;
		}
		case 13:{
			sprintf(escolha,"%s","177.23.148.174:8081");
			
			break;
		}
		case 18:{
			sprintf(escolha,"%s","177.23.150.214:8081");
			
			break;
		}
		case 6:{
			sprintf(escolha,"%s","177.23.148.122:8081");
			
			break;
		}
		case 16:{
			sprintf(escolha,"%s","177.23.146.222:8081");
			
			break;
		}
		case 17:{
			sprintf(escolha,"%s","177.23.150.106:8081");
			
			break;
		}
		case 23:{
			sprintf(escolha,"%s","177.23.146.226:8081");
			
			break;
		}
		case 24:{
			sprintf(escolha,"%s","177.23.150.226:8081");
			
			break;
		}
		case 32:{
			sprintf(escolha,"%s","177.23.146.206:8081");
			
			break;
		}
		case 33:{
			sprintf(escolha,"%s","177.23.146.210:8081");
			
			break;
		}
		case 35:{
			sprintf(escolha,"%s","177.23.146.78:8081");
			
			break;
		}
		case 38:{
			sprintf(escolha,"%s","177.23.148.10:8081");
			
			break;
		}
		case 41:{
			sprintf(escolha,"%s","177.23.150.42:8081");
			
			break;
		}
		case 42:{
			sprintf(escolha,"%s","177.23.146.38:8081");
			
			break;
		}
		case 40:{
			sprintf(escolha,"%s","177.23.146.202:8081");
			
			break;
		}
		case 4:{
			sprintf(escolha,"%s","177.23.146.198:8081");
			
			break;
		}
		case 19:{
			sprintf(escolha,"%s","177.23.148.254:8081");
			
			break;
		}
		case 39:{
			sprintf(escolha,"%s","177.23.146.166:8081");
			
			break;
		}
		
		default:{
			
			
			if (loja > 0 && loja <= 42){
				int op;
				system("cls");
				printf("\n\tHmmm... parece que a loja %d não tem pfsense...",loja);
				printf("\n\tdigite 1 se desejar acessar informações do link de backup \n\tou qualquer tecla para voltar ao início ");
				scanf("%d",&op);
				fflush(stdin);
				
				if(op == 1){
						system("cls");
				printf("\n\tIremos abrir a lista de Wifi na loja, peça que reinicie\n\to wifi responsável pelo link de backup.");
				Sleep(500);
				char copiar2[600],testar[500] = "https://anossadrogaria-my.sharepoint.com/:x:/r/personal/marcoslopes_anossadrogaria_com_br/_layouts/15/Doc.aspx?sourcedoc=%7B4f9f1f45-312f-46a7-aae7-d21ed27416a1%7D&action=edit&activeCell=%27Wifi%27!A34&wdinitialsession=86895946-7dfc-41fc-a5fb-b0860afa86d4&wdrldsc=2&wdrldc=1&wdrldr=AccessTokenExpiredWarning%2CRefreshingExpiredAccessT";
				sprintf(copiar2,"%s %s",chrome,testar);
				system(copiar2);
				}
			
			
				
			}else{
				opInvalida();
			loja = 404;
				break;
			}
			loja = 404;
			
			
		
			
		}
	}	
	
		if(loja != 404){
				printf("\n\tAcessando Loja %d",loja);
				sprintf(juntar, "%s %s",chrome,escolha);
				system(juntar);
				
				
					
					
					sprintf(escolha,"192.168.%d.40",loja); 
					sprintf(juntar, "%s %s",chrome,escolha);
					system(juntar);
					Sleep(1000);
				
		}
	
		
}
void opInvalida(){
	printf("\n\tOpção inválida!");
	Sleep(500);
}
