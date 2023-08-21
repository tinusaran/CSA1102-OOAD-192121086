
#ifndef STOCK_CLASS_H
#define STOCK_CLASS_H

#include <string>

/**
  * class Stock_class
  * 
  */

class Stock_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Stock_class ();

  /**
   * Empty Destructor
   */
  virtual ~Stock_class ();

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

  void Stock_Id;
  void Stock_Item;
  void Stock_number;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Stock_Id
   * @param new_var the new value of Stock_Id
   */
  void setStock_Id (void new_var)   {
      Stock_Id = new_var;
  }

  /**
   * Get the value of Stock_Id
   * @return the value of Stock_Id
   */
  void getStock_Id ()   {
    return Stock_Id;
  }

  /**
   * Set the value of Stock_Item
   * @param new_var the new value of Stock_Item
   */
  void setStock_Item (void new_var)   {
      Stock_Item = new_var;
  }

  /**
   * Get the value of Stock_Item
   * @return the value of Stock_Item
   */
  void getStock_Item ()   {
    return Stock_Item;
  }

  /**
   * Set the value of Stock_number
   * @param new_var the new value of Stock_number
   */
  void setStock_number (void new_var)   {
      Stock_number = new_var;
  }

  /**
   * Get the value of Stock_number
   * @return the value of Stock_number
   */
  void getStock_number ()   {
    return Stock_number;
  }
private:


  void initAttributes () ;

};

#endif // STOCK_CLASS_H
