
#ifndef AIRCRAFTDESCRIPTION_H
#define AIRCRAFTDESCRIPTION_H

#include <string>

/**
  * class AircraftDescription
  * 
  */

class AircraftDescription
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  AircraftDescription ();

  /**
   * Empty Destructor
   */
  virtual ~AircraftDescription ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void get_details ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void Manufacturer;
  int ModelNumebr;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Manufacturer
   * @param new_var the new value of Manufacturer
   */
  void setManufacturer (void new_var)   {
      Manufacturer = new_var;
  }

  /**
   * Get the value of Manufacturer
   * @return the value of Manufacturer
   */
  void getManufacturer ()   {
    return Manufacturer;
  }

  /**
   * Set the value of ModelNumebr
   * @param new_var the new value of ModelNumebr
   */
  void setModelNumebr (int new_var)   {
      ModelNumebr = new_var;
  }

  /**
   * Get the value of ModelNumebr
   * @return the value of ModelNumebr
   */
  int getModelNumebr ()   {
    return ModelNumebr;
  }
private:


  void initAttributes () ;

};

#endif // AIRCRAFTDESCRIPTION_H
