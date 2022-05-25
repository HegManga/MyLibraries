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
matrix matrix_new(matrix_table_type type_id, unsigned int rows, unsigned int columns, matrix_type_opt *types_opt,  char **argv){
	//private function, create an invalid matrix
	
	}
matrix matrix_ones(unsigned int rows, unsigned int columns){
	matrix ret = matrix_new();
	return ret;
	}
matrix matrix_zeros(unsigned int rows, unsigned int columns);
matrix matrix_rand(unsigned int rows, unsigned int columns, );
matrix matrix_rand_int(unsigned int rows, unsigned int columns,unsigned int max);
matrix matrix_eye(unsigned int rows, unsigned int columns);

int main(){
	return 0;}
