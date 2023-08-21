
#ifndef PAYMENTS_H
#define PAYMENTS_H

#include <string>

/**
  * class Payments
  * 
  */

class Payments
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Payments ();

  /**
   * Empty Destructor
   */
  virtual ~Payments ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void customerld;
  void name;
  void cardtype;
  void new_attributeacardno;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of customerld
   * @param new_var the new value of customerld
   */
  void setCustomerld (void new_var)   {
      customerld = new_var;
  }

  /**
   * Get the value of customerld
   * @return the value of customerld
   */
  void getCustomerld ()   {
    return customerld;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of cardtype
   * @param new_var the new value of cardtype
   */
  void setCardtype (void new_var)   {
      cardtype = new_var;
  }

  /**
   * Get the value of cardtype
   * @return the value of cardtype
   */
  void getCardtype ()   {
    return cardtype;
  }

  /**
   * Set the value of new_attributeacardno
   * @param new_var the new value of new_attributeacardno
   */
  void setNew_attributeacardno (void new_var)   {
      new_attributeacardno = new_var;
  }

  /**
   * Get the value of new_attributeacardno
   * @return the value of new_attributeacardno
   */
  void getNew_attributeacardno ()   {
    return new_attributeacardno;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENTS_H
