#ifndef CALC_CALC_LIB_H
#define CALC_CALC_LIB_H

double make_double(char*, int);

int priority(char);

double make_operation(double, double, char);

bool check_forward(char*, int);

bool check_reverse(char*, int);

double calculate_reverse(char*, int);

#endif //CALC_CALC_LIB_H
