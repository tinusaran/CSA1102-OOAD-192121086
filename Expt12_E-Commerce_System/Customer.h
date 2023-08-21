
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

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
  void viewitems ()
  {
  }


  /**
   */
  void buyitems ()
  {
  }


  /**
   */
  void addtocart ()
  {
  }


  /**
   */
  void makepayment ()
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

  void id;
  void Name;
  void email;
  void address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }

  /**
   * Set the value of email
   * @param new_var the new value of email
   */
  void setEmail (void new_var)   {
      email = new_var;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  void getEmail ()   {
    return email;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (void new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  void getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
