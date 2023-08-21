
#ifndef DELIVERY_H
#define DELIVERY_H

#include <string>
#include vector



/**
  * class Delivery
  * 
  */

class Delivery
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Delivery ();

  /**
   * Empty Destructor
   */
  virtual ~Delivery ();

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
  void Update ()
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

  int ID;
  string Name;
  string Date;
  string Address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ID
   * @param new_var the new value of ID
   */
  void setID (int new_var)   {
      ID = new_var;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  int getID ()   {
    return ID;
  }

  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (string new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  string getName ()   {
    return Name;
  }

  /**
   * Set the value of Date
   * @param new_var the new value of Date
   */
  void setDate (string new_var)   {
      Date = new_var;
  }

  /**
   * Get the value of Date
   * @return the value of Date
   */
  string getDate ()   {
    return Date;
  }

  /**
   * Set the value of Address
   * @param new_var the new value of Address
   */
  void setAddress (string new_var)   {
      Address = new_var;
  }

  /**
   * Get the value of Address
   * @return the value of Address
   */
  string getAddress ()   {
    return Address;
  }
private:


  void initAttributes () ;

};

#endif // DELIVERY_H
