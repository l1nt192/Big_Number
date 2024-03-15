#include <stdbool.h>

typedef unsigned char digit;

// Тип большого числа (>10 знаков)
struct BigNumber
{
	unsigned int size;		// Размер числа
	digit* digits;  	// Массив из цифр числа
	bool is_negative;	// Знак числа
};

/*
* @brief Создание большого числа
* @param number_ : Строка с большим числом
* @return Указатель на выделенную память с большим числом 
*/
BigNumber* CreateBN(char* number_);

/*
* @brief Удаляет выбранное большое число
* @param bn_ : Указатель на большое число
*/
void DeleteBN(BigNumber** bn_);

/*
* @brief Печать большого числа
* @param bn_ : Указатель на большое число
*/
void PrintBN(BigNumber* bn_);

/*
* @brief Сумма двух больших чисел
* @param bn1_, bn2_ : Большие числа
* @return Большое число из суммы двух входных
*/
BigNumber* SumBN(BigNumber* bn1_, BigNumber* bn2_);
