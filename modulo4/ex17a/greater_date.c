#define BITS_YEAR 8						// Constante que representa o número de bits onde se está o ano
#define BITS_DAY 24						// Constante que representa o número de bits onde se está o dia

unsigned int greater_date(unsigned int date1, unsigned int date2) {
		
	short year1 = (short) (date1 >> BITS_YEAR);		// Coloca o ano da data 1 na variável year1
	short year2 = (short) (date2 >> BITS_YEAR);		// Coloca o ano da data 2 na variável year2
	
	if (year1 > year2) return date1;			// Verifica se o ano da data 1 é maior do que o da data 2
	if (year1 < year2) return date2;			// Verifica se o ano da data 1 é menor do que o da data 2
	
	char month1 = (char) date1;				// Coloca o mês da data 1 na variável month1
	char month2 = (char) date2;				// Coloca o mês da data 2 na variável month2
		
	if (month1 > month2) return date1;			// Verifica se o mês da data 1 é maior do que o da data 2	
	if (month1 < month2) return date2;			// Verifica se o mês da data 1 é menor do que o da data 2
	
	char day1 = (char) (date1 >> BITS_DAY);			// Coloca o dia da data 1 na variável day1
	char day2 = (char) (date2 >> BITS_DAY);			// Coloca o dia da data 2 na variável day2
		
	if (day1 > day2) return date1;				// Verifica se o dia da data 1 é maior do que o da data 2
	if (day1 < day2) return date2;				// Verifica se o dia da data 1 é menor do que o da data 2
		
	return date1;
}
