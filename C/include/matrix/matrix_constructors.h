/* **************************************************** */
/* Constructors                                */


#ifndef MATRIX_CONSTRUCTORS_H
#define MATRIX_CONSTRUCTORS_H


matrix matrix_new(matrix_table_type type_id, unsigned int rows, unsigned int columns, matrix_type_opt *types_opt);
matrix matrix_ones(unsigned int rows, unsigned int columns);
matrix matrix_zeros(unsigned int rows, unsigned int columns);
matrix matrix_rand(matrix_table_type type_id, unsigned int rows, unsigned int columns);
matrix matrix_randint(unsigned int rows, unsigned int columns,unsigned int max);
matrix matrix_rand_fromto(unsigned int rows, unsigned int columns,matrix_table_type_u min, matrix_table_type_u max);
matrix matrix_randint_fromto(unsigned int rows, unsigned int columns,int min, int max);
matrix matrix_eye(unsigned int rows, unsigned int columns);
//matrix matrix_diag(  forse ha senso fare prima la libreria array


#endif
