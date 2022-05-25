/* **************************************************** */
/* Types dfinitions                                     */

typedef enum{
	no_opt,
	zeros,
	ones,
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
	}matrix_type_opt;

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
	
typedef union tab{
	int* i;
	long int* i;
	float* f;
	double* d;
	}matrix_table;	
	
typedef struct M{
	matrix_table*table;
	matrix_table_type type_id;
	unsigned int rows; 
	unsigned int columns;
	matrix_type_opt type_opt;
	unsigned int nonzeros_element;
	//
} mmatrix;

typedef mmatrix* matrix;
