
#ifndef CENTRAL_SYSTEM_H
#define CENTRAL_SYSTEM_H

#include <string>

/**
  * class central_system
  * 
  */

class central_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  central_system ();

  /**
   * Empty Destructor
   */
  virtual ~central_system ();

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
  void print_bill ()
  {
  }


  /**
   */
  void validate_card ()
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

  void product_name;
  void poduct_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of product_name
   * @param new_var the new value of product_name
   */
  void setProduct_name (void new_var)   {
      product_name = new_var;
  }

  /**
   * Get the value of product_name
   * @return the value of product_name
   */
  void getProduct_name ()   {
    return product_name;
  }

  /**
   * Set the value of poduct_details
   * @param new_var the new value of poduct_details
   */
  void setPoduct_details (void new_var)   {
      poduct_details = new_var;
  }

  /**
   * Get the value of poduct_details
   * @return the value of poduct_details
   */
  void getPoduct_details ()   {
    return poduct_details;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_SYSTEM_H
