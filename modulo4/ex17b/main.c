/* Ficheiro principal para a resolução do exercício 17b do módulo 4 */
#include <stdio.h>
#include "greater_date.h"
#include "print_bits.h"

unsigned int build_date(unsigned year, unsigned month, unsigned day) {
	return (year << 8) | (day << 24) | month;
}

int main(void) {
	printf("----- Data 1 -----\n");
	unsigned int date1_year = 2022;
	printf("Valor do ano: %d\n", date1_year);
	printf("Representação em binário: ");
	print_bits(date1_year);
	
	unsigned int date1_month = 11;
	printf("Valor do mês: %d\n", date1_month);
	printf("Representação em binário: ");
	print_bits(date1_month);
	
	unsigned int date1_day = 15;
	printf("Valor do dia: %d\n", date1_day);
	printf("Representação em binário: ");
	print_bits(date1_day);
	
	unsigned int date1 = build_date(date1_year, date1_month, date1_day);
	printf("Valor da data 1: %d\n", date1);
	printf("Representação em binário: ");
	print_bits(date1);
	
	printf("\n----- Data 2 -----\n");
	unsigned int date2_year = 2022;
	printf("Valor do ano: %d\n", date2_year);
	printf("Representação em binário: ");
	print_bits(date2_year);
	
	unsigned int date2_month = 11;
	printf("Valor do mês: %d\n", date2_month);
	printf("Representação em binário: ");
	print_bits(date2_month);
	
	unsigned int date2_day = 18;
	printf("Valor do dia: %d\n", date2_day);
	printf("Representação em binário: ");
	print_bits(date2_day);
	
	unsigned int date2 = build_date(date2_year, date2_month, date2_day);
	printf("Valor da data 2: %d\n", date2);
	printf("Representação em binário: ");
	print_bits(date2);
	
	unsigned int result = greater_date(date1, date2);	

	printf("\n----- Maior data -----\n");
	printf("Valor da data: %u\n", result);
	printf("Representação em binário: ");
	print_bits(result);
	
	return 0;
}

