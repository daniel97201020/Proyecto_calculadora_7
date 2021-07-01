/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// ubicacion de prototipos de function
long suma(int,int);
long resta (int,int);
long multiplicacion(int,int);
long division(int,int);

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

}

// the loop function runs over and over again forever
void loop() {



}

long suma(int a,int b){
  // variables de entrada , son dos int que pueden tener un valor signed o unsigned
  long c = 0; 
  c = a + b;
  return c;
  //variable de salida un long, que puede ser signed o unsigned
  //operacion se tiene que realizar la suma de las variables de entrada, y regresar el resultado al salir de la funcion


}
long resta (int a,int b){

}
long multiplicacion(int a,int b){

}
long division(int a,int b){

}
