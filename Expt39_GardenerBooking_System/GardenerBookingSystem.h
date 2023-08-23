
#ifndef GARDENERBOOKINGSYSTEM_H
#define GARDENERBOOKINGSYSTEM_H

#include <string>

/**
  * class GardenerBookingSystem
  * 
  */

class GardenerBookingSystem
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  GardenerBookingSystem ();

  /**
   * Empty Destructor
   */
  virtual ~GardenerBookingSystem ();

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

  void Customer;
  void gardeners;
  void bookings;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Customer
   * @param new_var the new value of Customer
   */
  void setCustomer (void new_var)   {
      Customer = new_var;
  }

  /**
   * Get the value of Customer
   * @return the value of Customer
   */
  void getCustomer ()   {
    return Customer;
  }

  /**
   * Set the value of gardeners
   * @param new_var the new value of gardeners
   */
  void setGardeners (void new_var)   {
      gardeners = new_var;
  }

  /**
   * Get the value of gardeners
   * @return the value of gardeners
   */
  void getGardeners ()   {
    return gardeners;
  }

  /**
   * Set the value of bookings
   * @param new_var the new value of bookings
   */
  void setBookings (void new_var)   {
      bookings = new_var;
  }

  /**
   * Get the value of bookings
   * @return the value of bookings
   */
  void getBookings ()   {
    return bookings;
  }
private:


  void initAttributes () ;

};

#endif // GARDENERBOOKINGSYSTEM_H
