#include <stdio.h>
#include <stdlib.h>

#include "../../include/matrix/matrix_typedef.h"
#include "../../include/matrix/matrix_constructors.h"
#include "../rand/rand.h"

/*
typedef struct M{
	matrix_table*table;
	matrix_table_type type_id;
	unsigned int rows; 
	unsigned int columns;
	matrix_type_opt type_opt;
	unsigned int nonzeros_element;
	//
} mmatrix;
*/
matrix matrix_new(matrix_table_type type_id, unsigned int rows, unsigned int columns, matrix_type_opt *types_opt){
	//private function, create an invalid matrix
	
	}
	
matrix matrix_ones(unsigned int rows, unsigned int columns){
	matrix ret;
	matrix_type_opt *types_opt = NULL;
	matrix_table_type type_id = ones;
	
	ret = matrix_new(type_id,rows,columns,types_opt);
	ret->is_valid=_true;
	return ret;
	}

matrix matrix_zeros(unsigned int rows, unsigned int columns);
matrix matrix_rand(matrix_table_type type_id, unsigned int rows, unsigned int columns);
matrix matrix_randint(unsigned int rows, unsigned int columns,unsigned int max);
matrix matrix_rand_fromto(unsigned int rows, unsigned int columns,matrix_table_type_u min, matrix_table_type_u max);
matrix matrix_randint_fromto(unsigned int rows, unsigned int columns,int min, int max);
matrix matrix_eye(unsigned int rows, unsigned int columns);


