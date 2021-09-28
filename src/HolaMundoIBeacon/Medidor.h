// -*- mode: c++ -*-

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// ------------------------------------------------------
// ------------------------------------------------------
class Medidor {

  // .....................................................
  // .....................................................
private:

public:

  // .....................................................
  // constructor
  // .....................................................
  Medidor(  ) {
  } // ()

  // .....................................................
  /**
 * Este metodo se encarga de iniciar el medidor.NO recibe ni devuelve nada.
 */
  // .....................................................
  void iniciarMedidor() {
	// las cosas que no se puedan hacer en el constructor, if any
  } // ()

  // .....................................................
  /**
 * Este metodo se encarga de medir el CO2.NO recibe nada y devuelve un valor entero fijo.
 * 
 * @return {Z} - Valor entero fijo que es 235
 */
  // .....................................................
  int medirCO2() {
	return 235;
  } // ()

  // .....................................................
  /**
 * Este metodo se encarga de medir la temperatura.NO recibe nada y devuelve un valor entero fijo.
 * 
 * @return {Z} - Valor entero fijo que es -12
 */
  // .....................................................
  int medirTemperatura() {
	return -12; // qué frío !
  } // ()
	
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
