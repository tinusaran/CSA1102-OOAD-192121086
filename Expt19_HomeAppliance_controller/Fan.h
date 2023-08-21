
#ifndef FAN_H
#define FAN_H

#include <string>

/**
  * class Fan
  * 
  */

class Fan
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Fan ();

  /**
   * Empty Destructor
   */
  virtual ~Fan ();

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
  void on ()
  {
  }


  /**
   */
  void off ()
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

  On/Off Status;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Status
   * @param new_var the new value of Status
   */
  void setStatus (On/Off new_var)   {
      Status = new_var;
  }

  /**
   * Get the value of Status
   * @return the value of Status
   */
  On/Off getStatus ()   {
    return Status;
  }
private:


  void initAttributes () ;

};

#endif // FAN_H
