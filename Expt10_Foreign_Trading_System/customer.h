
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/**
  * class customer
  * 
  */

class customer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  customer ();

  /**
   * Empty Destructor
   */
  virtual ~customer ();

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
  void payment ()
  {
  }


  /**
   */
  void deliver ()
  {
  }


  /**
   */
  void transport ()
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

  void order_product;
  void quality;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of order_product
   * @param new_var the new value of order_product
   */
  void setOrder_product (void new_var)   {
      order_product = new_var;
  }

  /**
   * Get the value of order_product
   * @return the value of order_product
   */
  void getOrder_product ()   {
    return order_product;
  }

  /**
   * Set the value of quality
   * @param new_var the new value of quality
   */
  void setQuality (void new_var)   {
      quality = new_var;
  }

  /**
   * Get the value of quality
   * @return the value of quality
   */
  void getQuality ()   {
    return quality;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
