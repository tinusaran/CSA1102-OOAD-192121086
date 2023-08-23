
#ifndef FEES_H
#define FEES_H

#include <string>

/**
  * class fees
  * 
  */

class fees
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  fees ();

  /**
   * Empty Destructor
   */
  virtual ~fees ();

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
  void addpayment ()
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

  int payment;
  int amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of payment
   * @param new_var the new value of payment
   */
  void setPayment (int new_var)   {
      payment = new_var;
  }

  /**
   * Get the value of payment
   * @return the value of payment
   */
  int getPayment ()   {
    return payment;
  }

  /**
   * Set the value of amount
   * @param new_var the new value of amount
   */
  void setAmount (int new_var)   {
      amount = new_var;
  }

  /**
   * Get the value of amount
   * @return the value of amount
   */
  int getAmount ()   {
    return amount;
  }
private:


  void initAttributes () ;

};

#endif // FEES_H
