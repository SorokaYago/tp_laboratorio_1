/// @brief permite mostrarle un mensaje al usuario para que ingrese un numero mientras que sea mayor a 1, caso contrario le muestra mensaje de error
/// @param char msg[]
/// @param char errorMsg[]
/// @return devuelve el flotante validado que sea mayor a 1
float pedirNumero (char msg[], char errorMsg[]);
//////////////////////////////////////////////////////////////////////////////////////////



/// @brief calcula el 10% de descuento al pagar con debito
/// @param float valor
/// @return ddevuelve el valor con el descuento aplicado
float calcularDebito(float valor);
//////////////////////////////////////////////////////////////////////////////////////////



/// @brief le incremente el 25% al valor del usuario
/// @param float valor
/// @return devuelve el valor con el 25% de interes sumado
float calcularCredito(float valor);
//////////////////////////////////////////////////////////////////////////////////////////



/// @brief toma el valor del usuario y lo divide por el valor de 1 BTC
///
/// @param float valor
/// @return devuelve el valor del calculo con 6 decimales, ya que los Bitcoins usan minimo 5 o mas decimales.
float calcularBtc(float valor);



/// @brief toma el valor que ingreso el usuario y lo divide por los kilometros que tambien ingreso el usuario
///
/// @param float precio
/// @param float km
/// @return retorna el precio por kilometro (precio unitario)
float calcularUnit(float precio, float km);
//////////////////////////////////////////////////////////////////////////////////////////



/// @brief valida cual es el numero mayor y le resta el numero menor
///
/// @param float precioA
/// @param float precioL
/// @return devuelve el resultado de la resta de ambos precios que el usuario ingreso
float calcularDif (float precioA, float precioL);
//////////////////////////////////////////////////////////////////////////////////////////



/// @brief realiza una carga forzada con datos ya asignados/hardcoded, de manera que siempre va a dar el mismo resultado
///
void forzarDatos (void);
//////////////////////////////////////////////////////////////////////////////////////////

