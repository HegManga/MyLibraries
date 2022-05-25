/********************************************/
/* get                                */

unsigned int matrix_get_size(matrix m);
matrix_type_opt matrix_get_type_opt(matrix m); 
double matrix_get_row(matrix m, unsigned int r);
double matrix_get_col(matrix m, unsigned int c);
double matrix_get_el(matrix m, unsigned int i,unsigned int j);
double matrix_get diag(matrix m);
void matrix_get_easter_egg();
