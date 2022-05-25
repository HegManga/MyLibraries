
#ifndef RAND_H
#define RAND_H

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
/* **************************************************** */
/* Rand from to */
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
float rand_float_fromto(float min, float max);
double rand_double_fromto(double min, double max);
long double rand_long_double_fromto(long double min, long double max);

/* **************************************************** */
/* Functions definitions */
char rand_char();
unsigned char rand_unsigned_char();
short rand_short();
unsigned short rand_unsigned_short();
int rand_int();
unsigned int rand_unsigned_int();
long int rand_long_int();
unsigned long int rand_unsigned_long_int();
long long int rand_long_long_int();
unsigned long long int rand_unsigned_long_long_int();
float rand_float();
double rand_double();
long double rand_long_double();

#endif
