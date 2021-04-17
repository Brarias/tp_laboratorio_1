/*
 * funcionesCalculadora.h
 *
 *  Created on: 17 abr. 2021
 *      Author: Braian
 */

#ifndef FUNCIONESCALCULADORA_H_
#define FUNCIONESCALCULADORA_H_


int menu(int flagNum1, int flagNum2, int operando1, int operando2);
int suma(int operando1, int operando2);
int resta(int operando1, int operando2);
int multiplicacion(int operando1, int operando2);
int division(float* pResultado ,int operando1, int operando2);
int factorial(int operando);


#endif /* FUNCIONESCALCULADORA_H_ */
