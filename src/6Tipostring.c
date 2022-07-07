#include <stdio.h>

int main()
{
	// caracteres + cadena de caracteres : string / array / vector
	char letra = 'a';				// 1 2 3 q ` # $ % 6 &  \n \t \r %%
	char caracter = '1';			// --> |1| (8bit = 1 byte)   --> |0|0|0|1|1|1|
	char palabra[10] = "HOLA"; 		// |H|O|L|A||||||||		--> vector
	char palabras[] = "coco babana como estas pepe";
 
	// IN - OUT
	// printf("\n ingrese un caracter:");		
	// fgets(letra, 1 , stdin);			// in

	// printf("\n ingrese una palabra:");
	// scanf("%s", &palabra);    // no usar fgets(palabra, 10 , stdin);

	// printf("\n ingrese varias palabras:");
	// fgets(palabras, 20 , stdin);
	// //scanf("%s", &palabras);   

	// printf("\nSalida es:  \t %s \t %s", palabra, palabras); // out
//  ----------------------------------------------------------------------------
	
	char caracterVector[4];  	//'' vector, array,    ['h']['o']['l']['a']
								//					   0    1    2    3
	char *palabrasVector[3];	//"" vector, array,    ["hola"]["como"]["estas"]  	...
								//						  0	      1	      2 		...
	char caracter1 = 'h';
	char caracter2 = 'o';
	char caracter3 = 'l';
	char caracter4 = 'a';

	caracterVector[0] ='h';		// pepe y juan
	caracterVector[1] ='0';
	caracterVector[2] ='l';
	caracterVector[3] ='a';
	
	printf("\ncaracter1:   %c ", caracter1); 
	printf("\ncaracter2:   %c ", caracter2); 
	printf("\ncaracter3:   %c ", caracter3); 
	printf("\ncaracter4:   %c ", caracter4); 

	printf("\n\n");

	for(int indice =0; indice<4 ; indice++)
		printf("\nfor caracterVector[%i]:   %c ",indice, caracterVector[indice]); 
	printf("\n\n");

	printf("\ncaracterVector[0]:   %c ", caracterVector[0]); 
	printf("\ncaracterVector[1]:   %c ", caracterVector[1]); 
	printf("\ncaracterVector[2]:   %c ", caracterVector[2]); 
	printf("\ncaracterVector[3]:   %c ", caracterVector[3]);
	
	palabrasVector[0] = "hola pepe, ";
	palabrasVector[1] = "como";
	palabrasVector[2] = "estas...";

	int numero = 12;
	printf("\n entero :   %i ", numero); 

	printf("\npalabrasVector[0]:   %s ", palabrasVector[0]); 
	printf("\npalabrasVector[1]:   %s ", palabrasVector[1]); 
	printf("\npalabrasVector[2]:   %s ", palabrasVector[2]); 


	// //palabrasVector[12] = 20; 	// *warning

	// printf("\npalabrasVector[0]: %s", palabrasVector[0]);
	// printf("\npalabrasVector[1]: %s", palabrasVector[1]);
	// printf("\npalabrasVector[2]: %s", palabrasVector[2]);

	//printf("\npalabrasVector[12]: %s", palabrasVector[12]);  	// *error
	return 0;
}

