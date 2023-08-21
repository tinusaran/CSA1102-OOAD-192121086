
#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

/**
  * class Supplier
  * 
  */

class Supplier
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Supplier ();

  /**
   * Empty Destructor
   */
  virtual ~Supplier ();

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
  void available_product ()
  {
  }


  /**
   */
  void money_transfer ()
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

  void product_supply_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of product_supply_
   * @param new_var the new value of product_supply_
   */
  void setProduct_supply_ (void new_var)   {
      product_supply_ = new_var;
  }

  /**
   * Get the value of product_supply_
   * @return the value of product_supply_
   */
  void getProduct_supply_ ()   {
    return product_supply_;
  }
private:


  void initAttributes () ;

};

#endif // SUPPLIER_H
