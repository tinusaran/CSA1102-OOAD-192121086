
#ifndef CUSTOMER1_H
#define CUSTOMER1_H

#include <string>

/**
  * class Customer1
  * 
  */

class Customer1
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Customer1 ();

  /**
   * Empty Destructor
   */
  virtual ~Customer1 ();

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
  void feedback ()
  {
  }


  /**
   */
  void customer ()
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

  void name;
  void purchase_product;
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
   * Set the value of purchase_product
   * @param new_var the new value of purchase_product
   */
  void setPurchase_product (void new_var)   {
      purchase_product = new_var;
  }

  /**
   * Get the value of purchase_product
   * @return the value of purchase_product
   */
  void getPurchase_product ()   {
    return purchase_product;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER1_H
