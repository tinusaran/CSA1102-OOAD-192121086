
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include vector



/**
  * class Customer
  * 
  */

class Customer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Customer ();

  /**
   * Empty Destructor
   */
  virtual ~Customer ();

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
  void Create ()
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

  string Address;
  int CardNum;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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

  /**
   * Set the value of CardNum
   * @param new_var the new value of CardNum
   */
  void setCardNum (int new_var)   {
      CardNum = new_var;
  }

  /**
   * Get the value of CardNum
   * @return the value of CardNum
   */
  int getCardNum ()   {
    return CardNum;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
