# rush01

descripción archivos:

*** test.c ***


contiene el main, y los prototipos a las demas funciones.


*** techniques.c ***

*** clue4.c ***

*** clue1_3.c ***

*** checker.c ***

descripción de las funciones:
*** Clue4 ***

Esta función se encarga de rellenar la fila con los valores de 1 a 4 si el parametro correspondiente es 4.

*** Clue1 ***

se encarga de poner el valor 4 si el parametro pasado es 1.

*** Clue3 ***

Se encarga, en caso de tener como parametro el 3, de poner en una de las dos casillas finales de la linea/columna donde esté el 3, el valor 4, si lo encuentra en otra fila/columna.

*** num3lineas ***

se encarga de comprobar si un numero está presente 3 veces las lineas o en las columnas. En caso de ser positiva la comprobación pasa ese valor a "rellena1"

*** rellena1 ***

se utiliza en la función num3lineas. En caso de que num3lineas encuentre un numero que ya se encuentra en 3 lineas o columnas, la función Rellena1 se encarga de rellenar el valor en la fila donde falte.

*** cleanmap ***

cleanmap genera un mapa de 4x4 vacía (llena de ceros)

*** printmap ***

printmap imprime en pantalla el mapa 4x4

*** checkError ***

checkError revisa si en entrada a la función Main se reciben exactamente 2 parametros (uno siempre es el nombre del programa y el segundo es la cadena de caracteres con los 16 numeros

*** nozero ***

se encarga de comprobar que no haya ceros en la matriz, por lo tanto que toda la tabla se haya rellenado con valores usando las demas funciones

*** checker ***

esta función, dividida luego por sus checkewhile, cuenta las ocurrencias de que el valor siguiente sea mayor que el anterior, por lo que sería el numero de "edificios" que se "ven" desde el borde. En caso de ser igual al parametro pasado inicialmente, daría 0, o en caso de no ser correcto, devolvería un 1.
