
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

char rand_char_from(char min, char max);
unsigned char rand_unsigned_char_from(unsigned char min, unsigned char max);
short rand_short_from(short min, short max);
unsigned short rand_unsigned_short_from(unsigned short min, double max);
int rand_int_from(int min, int max);
unsigned int rand_unsigned_int_from(unsigned int min, unsigned int max);
long int rand_long_int_from(long int min, long int max);
unsigned long int rand_unsigned_long_int_from(unsigned long int min, unsigned long int max);
long long int rand_long_long_int_from(long long int min, long long int max);
unsigned long long int rand_unsigned_long_long_int_from(unsigned long long int min, unsigned long long int max);
float rand_float_from(float min, float max);
double rand_double_from(double min, double max);
long double rand_long_double_from(long double min, long double max);

#endif
