/* Lucas Campos Meirelles RA: 156339 
 *	Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 * Tabela ASCII usada: http://www.thortech.ind.br/img/products/505d181f53.pdf
 */

#include <stdio.h>

int main() 
{
	char caracter, last_caracter;
	int count_word = 1; //contador de palavras
	int flag_symbol_blanks = 0; //contador de símbolos ou espaços
	
	
	while (1) //percorrer e realimentar caracter por caracter da frase analisada
	{
		scanf("%c", &caracter);
		//verificar se acabou a frase verificada
		if (caracter == '\n')
		{
			printf("%d\n", count_word);
			return 0;
		}
		//verificar se o caracter é um símbolo da tabela ASCII
		if (caracter >= 32 && caracter <= 47)
		{ 
   			flag_symbol_blanks = 1;
		}
		//verificar se é uma palavra para contagem
		else if (flag_symbol_blanks == 1 && (!((caracter >= 48 && caracter <= 57) && (last_caracter == 44 || last_caracter == 46))))
		{
			count_word = count_word + 1;
			flag_symbol_blanks = 0;
		}
		//lógica necessária para que números decimais não sejam contados mais de uma vez
		else
		{
			flag_symbol_blanks = 0;
		}
	
	//carregamento do caracter atual para posterior comparação
	last_caracter = caracter;	 
	}
}


