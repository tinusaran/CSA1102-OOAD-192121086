
#ifndef PURCHASE_ORDER_H
#define PURCHASE_ORDER_H

#include <string>

/**
  * class Purchase_Order
  * 
  */

class Purchase_Order
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Purchase_Order ();

  /**
   * Empty Destructor
   */
  virtual ~Purchase_Order ();

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
  void getPONo ()
  {
  }


  /**
   */
  void sumline_items ()
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

  void PONo;
  void Orderdate;
  void Ship_date;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of PONo
   * @param new_var the new value of PONo
   */
  void setPONo (void new_var)   {
      PONo = new_var;
  }

  /**
   * Get the value of PONo
   * @return the value of PONo
   */
  void getPONo ()   {
    return PONo;
  }

  /**
   * Set the value of Orderdate
   * @param new_var the new value of Orderdate
   */
  void setOrderdate (void new_var)   {
      Orderdate = new_var;
  }

  /**
   * Get the value of Orderdate
   * @return the value of Orderdate
   */
  void getOrderdate ()   {
    return Orderdate;
  }

  /**
   * Set the value of Ship_date
   * @param new_var the new value of Ship_date
   */
  void setShip_date (void new_var)   {
      Ship_date = new_var;
  }

  /**
   * Get the value of Ship_date
   * @return the value of Ship_date
   */
  void getShip_date ()   {
    return Ship_date;
  }
private:


  void initAttributes () ;

};

#endif // PURCHASE_ORDER_H
