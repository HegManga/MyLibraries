
#ifndef MATRIX_TYPEDEF_H
#define MATRIX_TYPEDEF_H

#include "../boolean/boolean.h"

/* **************************************************** */
/* Types dfinitions                                     */

typedef enum{
	no_opt,
	zeros,
	ones,
	costant,
	identity,
	sparse,
	upper_triangular,
	lower_triangular,
	diagonal,
	block_diagonal,
	hessenberg,
	tridiagonal,
	hermitian,
	permutation,
	householder,
	gauss_frobenius
	}matrix_type_opt_enum;

typedef enum{
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
	}matrix_table_type;

typedef union mtelu{
	char signed_char;
	unsigned char unsigned_char;
	short short_signed_integer;
	unsigned short short_unsigned_integer;
	int signed_integer;
	unsigned int unsigned_integer;
	long int signed_long_integer;
	unsigned long int unsigned_long_integer;
	long long int signed_long_long_integer;
	unsigned long long int unsigned_long_long_integer;
	float floating_point;
	double double_point;
	long double long_double_point;
	}matrix_table_type_u;


typedef union tab{
	int* i;
	long int* i;
	float* f;
	double* d;
	}matrix_table;	
	
typedef struct M_T_O{
	matrix_type_opt_enum *types;
	unsigned int size;
}matrix_type_opt;

typedef struct M{
	matrix_table*table;
	matrix_table_type type_id;
	unsigned int rows; 
	unsigned int columns;
	matrix_type_opt types_opt;
	boolean is_valid;
	//unsigned int nonzeros_element;
	//
} mmatrix;

typedef mmatrix* matrix;

#endif
