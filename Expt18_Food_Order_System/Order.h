
#ifndef ORDER_H
#define ORDER_H

#include <string>
#include vector



/**
  * class Order
  * 
  */

class Order
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Order ();

  /**
   * Empty Destructor
   */
  virtual ~Order ();

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
  void ProcessDebit ()
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

  int ID;
  string Details;
  string OrderType;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ID
   * @param new_var the new value of ID
   */
  void setID (int new_var)   {
      ID = new_var;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  int getID ()   {
    return ID;
  }

  /**
   * Set the value of Details
   * @param new_var the new value of Details
   */
  void setDetails (string new_var)   {
      Details = new_var;
  }

  /**
   * Get the value of Details
   * @return the value of Details
   */
  string getDetails ()   {
    return Details;
  }

  /**
   * Set the value of OrderType
   * @param new_var the new value of OrderType
   */
  void setOrderType (string new_var)   {
      OrderType = new_var;
  }

  /**
   * Get the value of OrderType
   * @return the value of OrderType
   */
  string getOrderType ()   {
    return OrderType;
  }
private:


  void initAttributes () ;

};

#endif // ORDER_H
