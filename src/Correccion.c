#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
//void login();
void registrarSocio();
//void vacio();
void sociosRegistrados();
void deposito();
void retiro();
void verSaldo();
void transferencia();

struct socio{
	char nombres[50];
	char telefono[11];
	char ciudad[20];
	int n_cuenta;
	float saldo;
	int estado;
}s[10];


int main(){
	//vacio();
	//login();
}


void menu(){
	int op;
	
	do
	{
		system("cls");
		printf("\t\t\t\t\t   ===========================\n");
		printf("\t\t\t\t\t        SISTEMA BANCARIO     \n");
		printf("\t\t\t\t\t   ===========================\n\n\n");
		printf("MENU PRINCIPAL\n");
		printf("--------------\n\n");
		printf("1. Registrar Socio\n");
		printf("2. Ver Socio Registrados\n");
		printf("3. Realizar Deposito\n");
		printf("4. Realizar Retiro\n");
		printf("5. Realizar Transferencia\n");
		printf("6. Ver Saldo Actual\n");
		printf("7. Cerrar Sesion\n");
		printf("8. Salir del Programa\n\n");
		printf("Ingrese una opcion: ");
		scanf("%i",&op);	
	}while(op < 1 || op > 8);
	
	switch(op){
		case 1:
			registrarSocio();
			break;
		
		case 2:
			sociosRegistrados();
			break;
		
		case 3:
			deposito();
			break;
			
		case 4:
			retiro();
			break;
		
		case 5:
			transferencia();
			break;
			
		case 6:
			verSaldo();
			break;
			
		/*case 7:
			login();
			break;
		*/
		case 8:
			exit(0);
			break;
	}
}

/*void vacio(){
	int i;
	for(i = 0; i < 10; i++){
		s[i].estado = 0;
	}
}
*/
/*
void login(){
	char usuario[30] = "Admin";
	char contra[30] = "12345";
	char usu[30], con[30];
	int intentos = 0, i;
	char caracter;
	fflush(stdin);
	
	do{
		intentos++;
		i = 0;
		system("cls");
		printf("\t\t\t\t\t   ===========================\n");
		printf("\t\t\t\t\t        SISTEMA BANCARIO     \n");
		printf("\t\t\t\t\t   ===========================\n\n\n");
		
		printf("INICIO DE SESION\n");
		printf("-----------------\n\n");
		printf("Usuario:      ");
		gets(usu);
		printf("Contrasena:   ");
		while(caracter = getchar()){
			if(caracter == 13){
				con[i] = '\0';
				break;	
			}
			
			else if(caracter == 8){
				if(i > 0){
					i--;
					printf("\b \b");
				}
			}
			
			else{
				printf("*");
				con[i] = caracter;
				i++;
			}
		}
		
		if(strcmp(usuario,usu) == 0 && strcmp(contra,con) == 0){
			printf("\n\nLos datos ingresados son correctos!\n");
			system("pause");
			menu();
		}
		
		else if(intentos == 3){
			printf("\n\nDatos incorrectos! Ha excedido el numero de intentos!\n");
			system("pause");
			exit(0);
		}
		
		else{
			printf("\n\nDatos incorrectos! Intetelo de nuevo.\n");
			system("pause");
		}
	}while(intentos != 3);
	
	
}
*/

void registrarSocio(){
	int i,j, n_cuenta, rep, aux = 0;
	
	system("cls");
	printf("\t\t\t\t\t   ===========================\n");
	printf("\t\t\t\t\t        SISTEMA BANCARIO     \n");
	printf("\t\t\t\t\t   ===========================\n\n\n");
	printf("REGISTRAR SOCIO\n");
	printf("---------------\n\n");
	fflush(stdin);
	
	for(i = 0; i < 10; i++){
		if(s[i].estado == 0){
			aux = 1;
			
			printf("Ingrese nombres:     ");
			gets(s[i].nombres);
			
			printf("Ingrese ciudad:      ");
			gets(s[i].ciudad);
			
			printf("Ingrese telefono:    ");
			gets(s[i].telefono);
			
			do{
				rep = 0;
				printf("Ingrese # de cuenta: ");
				scanf("%i",&n_cuenta);	
				
				for(j = 0; j < 10; j++){
					if(n_cuenta == s[j].n_cuenta){
						rep = 1;
					}	
				}
			}while(rep == 1);
			
			
			s[i].n_cuenta = n_cuenta;
			s[i].estado = 1;
			s[i].saldo = 0;
			
			
			printf("\nSe registro al socio correctamente.\n");
			system("pause");
			menu();
		}
	}
	
	if(aux == 0){
		printf("\nNo se pueden registrar mas socios.\n");
		system("pause");
		menu();
	}	
}

void sociosRegistrados(){
	int i, aux = 0;
	
	system("cls");
	printf("\t\t\t\t\t   ===========================\n");
	printf("\t\t\t\t\t        SISTEMA BANCARIO     \n");
	printf("\t\t\t\t\t   ===========================\n\n\n");
	printf("SOCIOS REGISTRADOS\n");
	printf("------------------\n\n");
	
	for(i = 0; i < 10; i++){
		if(s[i].estado == 1){
			aux++;
			printf("Nombres:  %s\n",s[i].nombres);
			printf("Ciudad:   %s\n",s[i].ciudad);
			printf("Telefono: %s\n",s[i].telefono);
			printf("N Cuenta: %i\n",s[i].n_cuenta);
			printf("Saldo:    %.2f\n\n",s[i].saldo);
			printf("---------------------------------------\n\n");
		}
	}
	
	if(aux == 0){
		printf("No hay socios registrados!\n");
	}
	
	system("pause");
	menu();
}

void deposito(){
	int i,n_cuenta, aux = 0;
	float deposito;
	
	system("cls");
	printf("\t\t\t\t\t   ===========================\n");
	printf("\t\t\t\t\t        SISTEMA BANCARIO     \n");
	printf("\t\t\t\t\t   ===========================\n\n\n");
	printf("REALIZAR DEPOSITO\n");
	printf("-----------------\n\n");
	
	printf("Ingrese Numero de Cuenta: ");
	scanf("%i",&n_cuenta);
	
	for(i = 0; i < 10; i++)
	{
		if(n_cuenta == s[].n_cuenta){
			aux = 1;
			printf("Ingrese valor a depositar: $");
			scanf("%f",&deposito);
			s[i].saldo += deposito;
			printf("\nEl deposito se realizo correctamente.\n");
			
		}
	}
	
	if(aux == 0){
		printf("\nNumero de Cuenta no existe.\n");
	}
	
	
	
	system("pause");
	menu();
}

void retiro(){
	int i,n_cuenta, aux = 0;
	float retiro;
	
	system("cls");
	printf("\t\t\t\t\t   ===========================\n");
	printf("\t\t\t\t\t        SISTEMA BANCARIO     \n");
	printf("\t\t\t\t\t   ===========================\n\n\n");
	printf("REALIZAR RETIRO\n");
	printf("---------------\n\n");
	
	printf("Ingrese Numero de Cuenta: ");
	scanf("%i",&n_cuenta);
	
	for(i = 0; i < 10; i++){
		if(n_cuenta == s[i].n_cuenta){
			aux = 1;
			
			do{
				printf("Ingrese valor a retirar: $");
				scanf("%f",&retiro);
			}while(retiro > s[i].saldo);
			
			s[i].saldo -= retiro;
			printf("\nEl retiro se realizo correctamente.\n");
		}
	}
	
	if(aux == 0){
		printf("\nNumero de Cuenta no existe.\n");
	}
	
	
	system("pause");
	menu();
}

void verSaldo(){
	int i, n_cuenta, aux = 0;
	
	system("cls");
	printf("\t\t\t\t\t   ===========================\n");
	printf("\t\t\t\t\t        SISTEMA BANCARIO     \n");
	printf("\t\t\t\t\t   ===========================\n\n\n");
	printf("VER SALDO ACTUAL\n");
	printf("-----------------\n\n");
	
	printf("Ingrese Numero de Cuenta: ");
	scanf("%i",&n_cuenta);
	
	for(i = 0; i < 10; i++){
		if(n_cuenta == s[i].n_cuenta){
			system("cls");
			printf("\t\t\t\t\t   ===========================\n");
			printf("\t\t\t\t\t        SISTEMA BANCARIO     \n");
			printf("\t\t\t\t\t   ===========================\n\n\n");
			printf("VER SALDO ACTUAL\n");
			printf("-----------------\n\n");
			printf("Numero de Cuenta: %i\n",s[i].n_cuenta);
			printf("Nombre del Socio: %s\n",s[i].nombres);
			printf("Saldo Actual:     $%.2f\n\n",s[i].saldo);
			aux = 1;
		}
	}
	
	if(aux == 0){
		printf("\nNumero de Cuenta no existe.\n");
	}
	
	system("pause");
	menu();
	
}

void transferencia(){
	int i, j, co, cd, aux = 0;
	float valor;
	
	system("cls");
	printf("\t\t\t\t\t   ===========================\n");
	printf("\t\t\t\t\t        SISTEMA BANCARIO     \n");
	printf("\t\t\t\t\t   ===========================\n\n\n");
	printf("TRANSFERENCIAS\n");
	printf("-----------------\n\n");
	
	printf("Ingrese Numero de Cuenta Origen:  ");
	scanf("%i",&co);
	
	printf("Ingrese Numero de Cuenta Destino: ");
	scanf("%i",&cd);
	
	for(i = 0; i < 10; i++){
		if(co == s[i].n_cuenta && s[i].saldo > 0){
			for(j = 0; j < 10; j++){
				if(cd == s[j].n_cuenta){
					do{
						printf("Ingrese valor a transferir:       $");
						scanf("%f",&valor);
					}while(valor > s[i].saldo);
					
					s[i].saldo -= valor;
					s[j].saldo += valor;
					aux = 1;	
				}	
			}
		}
	}
	
	if (aux == 0){
		printf("\nError al realizar transferencia.\n");
		system("pause");
		menu();
	}
	
	else{
		printf("\nTransferencia realizada con exito.\n");
		system("pause");
		menu();
	}
}
