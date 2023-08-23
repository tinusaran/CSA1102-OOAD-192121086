
#ifndef SHOP_H
#define SHOP_H

#include <string>

/**
  * class shop
  * 
  */

class shop
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  shop ();

  /**
   * Empty Destructor
   */
  virtual ~shop ();

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
  void details ()
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

  string name;
  string address;
  int phone_number;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (string new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  string getAddress ()   {
    return address;
  }

  /**
   * Set the value of phone_number
   * @param new_var the new value of phone_number
   */
  void setPhone_number (int new_var)   {
      phone_number = new_var;
  }

  /**
   * Get the value of phone_number
   * @return the value of phone_number
   */
  int getPhone_number ()   {
    return phone_number;
  }
private:


  void initAttributes () ;

};

#endif // SHOP_H
