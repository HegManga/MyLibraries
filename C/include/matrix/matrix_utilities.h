#include "matrix_typedef.h"

/********************************************* */
/* Utilities                                */

#ifndef BOOLEAN_H

typedef enum{
	_false,
	_true
	}boolean;

#endif

void matrix_print(matrix m);
matrix matrix_clone(matrix m);
char* matrix_toString(matrix m);
matrix matrix_toArray(matrix m);

//matrix matrix_indexOf(matrix m);

/**Boolean**/

boolean matrix_contains(matrix m);
boolean matrix_isZeros(matrix m);
boolean matrix_isIdentity(matrix m);
boolean matrix_isHermitian(matrix m);
boolean	matrix_equal_size(matrix a,matrix b);
//...

//utilities

void matrix_fill (matrix m);

matrix matrix_concat_hor(matrix a,matrix b);
matrix matrix_concat_ver(matrix a,matrix b);
//matrix matrix_reshape(matrix a
