/* **************************************************** */
/* Constructors                                */


#ifndef MATRIX_CONSTRUCTORS_H
#define MATRIX_CONSTRUCTORS_H


matrix matrix_new(int argc, char **argv);
matrix matrix_ones(unsigned int rows, unsigned int columns);
matrix matrix_zeros(unsigned int rows, unsigned int columns);
matrix matrix_random(unsigned int rows, unsigned int columns);
matrix matrix_randint(unsigned int rows, unsigned int columns,unsigned int max);
matrix matrix_eye(unsigned int rows, unsigned int columns);
//matrix matrix_diag(  forse ha senso fare prima la libreria array


#endif
