
#ifndef ORDER_H
#define ORDER_H

#include <string>

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

  void orderld;
  void orderno;
  void dateordered;
  void datecreated;
  void Orderstatus;
  void Customernumber;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of orderld
   * @param new_var the new value of orderld
   */
  void setOrderld (void new_var)   {
      orderld = new_var;
  }

  /**
   * Get the value of orderld
   * @return the value of orderld
   */
  void getOrderld ()   {
    return orderld;
  }

  /**
   * Set the value of orderno
   * @param new_var the new value of orderno
   */
  void setOrderno (void new_var)   {
      orderno = new_var;
  }

  /**
   * Get the value of orderno
   * @return the value of orderno
   */
  void getOrderno ()   {
    return orderno;
  }

  /**
   * Set the value of dateordered
   * @param new_var the new value of dateordered
   */
  void setDateordered (void new_var)   {
      dateordered = new_var;
  }

  /**
   * Get the value of dateordered
   * @return the value of dateordered
   */
  void getDateordered ()   {
    return dateordered;
  }

  /**
   * Set the value of datecreated
   * @param new_var the new value of datecreated
   */
  void setDatecreated (void new_var)   {
      datecreated = new_var;
  }

  /**
   * Get the value of datecreated
   * @return the value of datecreated
   */
  void getDatecreated ()   {
    return datecreated;
  }

  /**
   * Set the value of Orderstatus
   * @param new_var the new value of Orderstatus
   */
  void setOrderstatus (void new_var)   {
      Orderstatus = new_var;
  }

  /**
   * Get the value of Orderstatus
   * @return the value of Orderstatus
   */
  void getOrderstatus ()   {
    return Orderstatus;
  }

  /**
   * Set the value of Customernumber
   * @param new_var the new value of Customernumber
   */
  void setCustomernumber (void new_var)   {
      Customernumber = new_var;
  }

  /**
   * Get the value of Customernumber
   * @return the value of Customernumber
   */
  void getCustomernumber ()   {
    return Customernumber;
  }
private:


  void initAttributes () ;

};

#endif // ORDER_H
