#include "main.h"
/**
 * _islower - prints the alphabets in lower cas
 * @alpha: number or an alphabet
 * Return: returns 0 if successful or 1 if otherwise
 */

int  _islower(int c)
{
	if(islower(c)){
        return (1);
    }else{
        return (0);
    }
}
