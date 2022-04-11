/*
 * Ejemplo de operador módulo
 * Por: Hugo Vargas
 * Fecha: 8 de abril de 2022
 * 
 * Este es un programa para ejemplificar el uso básico del legunage C
 * y el microcontrolador ESP32CAM.
 * 
 */

// Bibliotecas
//#include <Serial.h>

// Constantes

// Variables
int dato = 0;

// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código
  Serial.begin (115200);  //Inicializacion del monitor serial
  Serial.println ("Conexion inicada"); //Mensaje de prueba
  delay (1000); //Espera

}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:
  dato++;
  //to = dato + 1;

  if (dato > 8) {
    dato = 0;
  }

  dato %= 8;

  Serial.println (dato);
  delay (1000); //Espera

}// Fin de void loop

// Funcioes del usuario
