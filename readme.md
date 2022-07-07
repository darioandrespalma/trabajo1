## workshop : may

### comados para compilar:
%d o %i ---------> Escribe como entero decimal.
%6d --------> Escribe como entero decimal, por lo menos con 6 caracteres de amplitud.
%u ---------> Especifican un entero sin signo.
%11d ---------> Direccion de un puntero o dato.
%11u ---------> Especifica un entero largo (long long). [*]
%s ---------> Especifica que el parametro es un puntero a un arreglo de caracteres.
%c ---------> Un caracter.
%x ---------> Especifica un valor hexagonal.
%% ---------> Muestra un literal de porcentaje.
%f ---------> Imprime un float o double.
%07i --------->  justificado a la derecha, 7 dígitos de largo, sin relleno
%.7i ---------> largo mínimo de 7 dígitos, justificado a la derecha, rellena con ceros
%8.2f ---------> tamaño total de 8 dígitos, con dos decimales
%.*f”',x,d) ---------> tamaño predeterminado,x numeros decimales
%*.*f”,x,y,d) ---------> tamaño igual a x, y numeros decimales
%s ---------> cadena terminada en null
%5s ---------> primeros cinco caracteres o delimitador
%.5s ---------> primeros cinco caracteres, sin tener en cuenta el delimitador.
%20.5s ---------> primeros cinco caracteres, justificados a la derecha, con 20 caracteres de largo.
%-20.5s ---------> primeros cinco caracteres, justificados a la izquierda, con 20 caracteres de largo.
\n ---------> Salto  de linea.
\t ---------> Una tabulacion de 4 espacios.
\b ---------> Bora un caracter hacia atras.
\0 ---------> Final de una cadena de caracteres.
\% ---------> Un porcentaje.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
for: un ciclo for es una estructura de control iterativa, que nos permite ejecutar de manera repetitiva un bloque de instrucciones, conocimiento previamente un valor de inicio, un tamano de paso y un valor final para el ciclo.
Funcionamiento del ciclo for: Para comprender mejor el funcionamiento del ciclo for, pongamos un ejemplo, supongamos que queremos mostrar los números pares entre el 50 y el 100, si imaginamos un poco como seria esto, podremos darnos cuenta que nuestro ciclo deberá mostrar una serie de números como la siguiente: 50 52 54 56 58 60 ... 96 98 100. Como podemos verificar, tenemos entonces los componentes necesarios para nuestro ciclo for, tenemos un valor inicial que sería el 50, tenemos también un valor final que sería el 100 y tenemos un tamaño de paso que es 2 (los números pares). Estamos ahora en capacidad de determinar los componentes esenciales para un ciclo for.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
While: Los ciclos while son tambien una estructura ciclica, que nos permite ejecutar una o varios lineas de codigo demanera repetitiva sin necesidad de tener un valor inicial que esperamos, los ciclos while, no dependen directamente de valores numericos.
Funcionamiento del ciclo while: La sintaxis es simple, solo necesitamos la condicion de finalizacion.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
If: Es una estructura de control condicional, es decir, nos permiten determinar qué acciones ejecutar según cierta condición sea verdadera, por ejemplo determinar si un número cualquiera es mayor que 10 y de acuerdo a esto mostrar un mensaje (o cualquier acción que sea necesaria).
Sintaxis: solo necesitamos el condicional a evaluar.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
if-else: Los condicionales if-else, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición, por ejemplo determinar si la contraseña ingresada por el usuario es válida o no y de acuerdo a esto darle acceso al sistema o mostrar un mensaje de error.
Se les conoce también como estructuras selectivas de casos dobles (porque definen ambas posibilidades en la ejecución --si se cumple y si no se cumple --).
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Switch: son una estructura de control condicional, que permite definir múltiples casos que puede llegar a cumplir una variable cualquiera, y qué acción tomar en cualquiera de estas situaciones, incluso es posible determinar qué acción llevar a cabo en caso de no cumplir ninguna de las condiciones dadas.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Do-while:Los ciclos do-while son una estructura de control cíclica, los cuales nos permiten ejecutar una o varias líneas de código de forma repetitiva sin necesidad de tener un valor inicial e incluso a veces sin siquiera conocer cuando se va a dar el valor final, hasta aquí son similares a los ciclos while, sin embargo el ciclo do-while nos permite añadir cierta ventaja adicional y esta consiste que nos da la posibilidad de ejecutar primero el bloque de instrucciones antes de evaluar la condición necesaria, de este modo los ciclos do-while, son más efectivos para algunas situaciones especificas. En resumen un ciclo do-while, es una estructura de control cíclica que permite ejecutar de manera repetitiva un bloque de instrucciones sin evaluar de forma inmediata una condición especifica, sino evaluándola justo después de ejecutar por primera vez el bloque de instrucciones.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
getchar() ------> Se puede conseguir la entrada de caracteres uno a uno. Devuelve un caracter laido del teclado. 
