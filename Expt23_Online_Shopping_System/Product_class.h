
#ifndef PRODUCT_CLASS_H
#define PRODUCT_CLASS_H

#include <string>

/**
  * class Product_class
  * 
  */

class Product_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Product_class ();

  /**
   * Empty Destructor
   */
  virtual ~Product_class ();

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
  void add_Stock ()
  {
  }


  /**
   */
  void Edit_Stock ()
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

  void Product_Id;
  void Product_Name;
  void Product_Stock_number;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Product_Id
   * @param new_var the new value of Product_Id
   */
  void setProduct_Id (void new_var)   {
      Product_Id = new_var;
  }

  /**
   * Get the value of Product_Id
   * @return the value of Product_Id
   */
  void getProduct_Id ()   {
    return Product_Id;
  }

  /**
   * Set the value of Product_Name
   * @param new_var the new value of Product_Name
   */
  void setProduct_Name (void new_var)   {
      Product_Name = new_var;
  }

  /**
   * Get the value of Product_Name
   * @return the value of Product_Name
   */
  void getProduct_Name ()   {
    return Product_Name;
  }

  /**
   * Set the value of Product_Stock_number
   * @param new_var the new value of Product_Stock_number
   */
  void setProduct_Stock_number (void new_var)   {
      Product_Stock_number = new_var;
  }

  /**
   * Get the value of Product_Stock_number
   * @return the value of Product_Stock_number
   */
  void getProduct_Stock_number ()   {
    return Product_Stock_number;
  }
private:


  void initAttributes () ;

};

#endif // PRODUCT_CLASS_H
