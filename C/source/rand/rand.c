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


char rand_double_from(char min, char max);
unsigned char rand_double_from(unsigned char min, unsigned char max);
short rand_double_from(short min, short max);
unsigned short rand_double_from(unsigned short min, double max);
int rand_double_from(int min, int max);
unsigned int rand_double_from(unsigned int min, unsigned int max);
long int rand_double_from(long int min, long int max);
unsigned long int rand_double_from(unsigned long int min, unsigned long int max);
long long int rand_double_from(long long int min, long long int max);
unsigned long long int rand_double_from(unsigned long long int min, unsigned long long int max);

float rand_float_from(float min,float max) {
    float range = (max - min); 
    float div = RAND_MAX / range;
    
    srand(time(NULL));
    
    return min + (rand() / div);
}


float rand_double_from(float min,float max) {
    float range = (max - min); 
    float div = RAND_MAX / range;
    
    srand(time(NULL));
    
    return min + (rand() / div);
}

long double rand_double_from(long double min,long double max) {
    long double range = (max - min); 
    long double div = RAND_MAX / range;
    
    srand(time(NULL));
    
    return min + (rand() / div);
}



