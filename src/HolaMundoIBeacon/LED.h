// -*- mode: c++ -*-

#ifndef LED_H_INCLUIDO
#define LED_H_INCLUIDO

// ----------------------------------------------------------
// Jordi Bataller i Mascarell
// 2019-07-07
// ----------------------------------------------------------

// ----------------------------------------------------------
/**
 * Este metodo se encarga de recibir un valor para que el led espere ese tiempo.
 * No devuelve nada.
 *
 *@param {N} tiempo - Valor de tiempo que esperara el led.
 *
 *
 */
// ----------------------------------------------------------
void esperar (long tiempo) {
  delay (tiempo);
}

// ----------------------------------------------------------
// ----------------------------------------------------------
class LED {
private:
//atributos privados de la clase
  int numeroLED;
  bool encendido;
public:

  // .........................................................
  //el constructor de la clase recibe un Z para crear un led
  // .........................................................
  LED (int numero)
	: numeroLED (numero), encendido(false)
  {
	pinMode(numeroLED, OUTPUT);
	apagar ();
  }

  // .........................................................
  /**
 * Este metodo se encarga de encender el led.No recibe ni devuelve nada
 */
  // .........................................................
  void encender () {
	digitalWrite(numeroLED, HIGH); 
	encendido = true;
  }

  // .........................................................
  /**
 * Este metodo se encarga de apagar el led.No recibe ni devuelve nada
 */
  // .........................................................
  void apagar () {
	  digitalWrite(numeroLED, LOW);
	  encendido = false;
  }

  // .........................................................
  /**
 * Este metodo se encarga de alternar el led.No recibe ni devuelve nada
 */
  // .........................................................
  void alternar () {
	if (encendido) {
	  apagar();
	} else {
	  encender ();
	}
  } // ()

  // .........................................................
  /**
 * Este metodo se encarga de recibir un valor para que el led brille ese tiempo, despues lo apagará.
 * No devuelve nada.
 *
 *@param {N} tiempo - Valor de tiempo que brillará el led.
 *
 *
 */
  // .........................................................
  void brillar (long tiempo) {
	encender ();
	esperar(tiempo); 
	apagar ();
  }
}; // class

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
