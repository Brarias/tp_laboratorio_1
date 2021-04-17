

#ifndef FUNCIONESCALCULADORA_H_
#define FUNCIONESCALCULADORA_H_


int menu(int flagNum1, int flagNum2, int operando1, int operando2);

/** \brief suma 2 enteros y retorna el resultado
 *
 * \param operando1 int recibe un entero para realizar la suma
 * \param operando2 int recibe otro entero a sumar
 * \return int devuelve el resultado de la suma
 *
 */
int suma(int operando1, int operando2);

/** \brief resta 2 enteros y retorna el resultado
 *
 * \param operando1 int entero para realizar la resta
 * \param operando2 int segundo entero para realizar la resta
 * \return int devuelve el resultado de la resta
 *
 */
int resta(int operando1, int operando2);

/** \brief multiplica 2 enteros y retorna el resultado
 *
 * \param operando1 int primer entero a multiplicar
 * \param operando2 int segundo entero a multiplicar
 * \return int resultado de la multiplicacion retornado
 *
 */
int multiplicacion(int operando1, int operando2);

/** \brief realiza la multiplicacion de 2 enteros y retorna resultado
 *
 * \param pResultado float* recibe direccion de memoria donde se guarda el resultado
 * \param operando1 int primer operador a dividir
 * \param operando2 int segundo operador a dividir. Debe ser distinto de cero
 * \return int retorna -1 si hay error(segundo operador distinto de cero o puntero NULL) y 0 si esta todo ok
 *
 */

int division(float* pResultado ,int operando1, int operando2);


/** \brief realiza el factorial de un entero  retorna el resultado
 *
 * \param operando int operandor a factorizar
 * \return int  devuelve el resultado de la factorizacion
 */

int factorial(int operando);


#endif /* FUNCIONESCALCULADORA_H_ */
