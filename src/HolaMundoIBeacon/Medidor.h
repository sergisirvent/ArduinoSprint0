// -*- mode: c++ -*-

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO
// ----------------------------------------------------------
// Sergi Sirvent Sempere
// 2021/09
// ----------------------------------------------------------
class Medidor {

  // .....................................................
  // .....................................................
private:

public:

  int VALOR_MEDICION = 12345;
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
 * @return {Z} - Valor entero fijo 
 */
  // .....................................................
  int medirCO2() {
	return VALOR_MEDICION;
  } // ()

  // .....................................................
  /**
 * Este metodo se encarga de medir la temperatura.NO recibe nada y devuelve un valor entero fijo.
 * 
 * @return {Z} - Valor entero fijo 
 */
  // .....................................................
  int medirTemperatura() {
	return VALOR_MEDICION; // qué frío !
  } // ()
	
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
