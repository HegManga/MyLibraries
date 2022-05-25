#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	signed_char,
	unsigned_char,
	short_signed_integer,
	short_unsigned_integer,
	signed_integer,
	unsigned_integer,
	signed_long_integer,
	unsigned_long_integer,
	signed_long_long_integer,
	unsigned_long_long_integer,
	floating_point,
	double_point,
	long_double_point
*/


char rand_char_fromto(char min, char max);
unsigned char rand_unsigned_char_fromto(unsigned char min, unsigned char max);
short rand_short_fromto(short min, short max);
unsigned short rand_unsigned_short_fromto(unsigned short min, double max);
int rand_int_fromto(int min, int max);
unsigned int rand_unsigned_int_fromto(unsigned int min, unsigned int max);
long int rand_long_int_fromto(long int min, long int max);
unsigned long int rand_unsigned_long_int_fromto(unsigned long int min, unsigned long int max);
long long int rand_long_long_int_fromto(long long int min, long long int max);
unsigned long long int rand_unsigned_long_long_int_fromto(unsigned long long int min, unsigned long long int max);

float rand_float_fromto(float min, float max){
    float range = (max - min); 
    float div = RAND_MAX / range;
    
    srand(time(NULL));
    
    return min + (rand() / div);
}

double rand_double_fromto(double min, double max){
    float range = (max - min); 
    float div = RAND_MAX / range;
    
    srand(time(NULL));
    
    return min + (rand() / div);
}

long double rand_long_double_fromto(long double min, long double max){
    long double range = (max - min); 
    long double div = RAND_MAX / range;
    
    srand(time(NULL));
    
    return min + (rand() / div);
}



