
#ifndef INTRUSION_SENSOR_H
#define INTRUSION_SENSOR_H

#include <string>

/**
  * class intrusion_sensor
  * 
  */

class intrusion_sensor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  intrusion_sensor ();

  /**
   * Empty Destructor
   */
  virtual ~intrusion_sensor ();

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
  void Monitor_intrusion ()
  {
  }


  /**
   */
  void Send_status ()
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

  bool Intrusion_detected;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Intrusion_detected
   * @param new_var the new value of Intrusion_detected
   */
  void setIntrusion_detected (bool new_var)   {
      Intrusion_detected = new_var;
  }

  /**
   * Get the value of Intrusion_detected
   * @return the value of Intrusion_detected
   */
  bool getIntrusion_detected ()   {
    return Intrusion_detected;
  }
private:


  void initAttributes () ;

};

#endif // INTRUSION_SENSOR_H
