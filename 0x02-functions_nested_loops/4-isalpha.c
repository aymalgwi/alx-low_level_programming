#include "main.h"
/**
 * if _isalpha, return 1, else return 0
 */
int _isalpha(int c)
{
	return((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
