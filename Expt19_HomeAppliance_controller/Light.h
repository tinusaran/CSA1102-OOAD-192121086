
#ifndef LIGHT_H
#define LIGHT_H

#include <string>

/**
  * class Light
  * 
  */

class Light
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Light ();

  /**
   * Empty Destructor
   */
  virtual ~Light ();

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

  on,off Status;
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
  void setStatus (on,off new_var)   {
      Status = new_var;
  }

  /**
   * Get the value of Status
   * @return the value of Status
   */
  on,off getStatus ()   {
    return Status;
  }
private:


  void initAttributes () ;

};

#endif // LIGHT_H
