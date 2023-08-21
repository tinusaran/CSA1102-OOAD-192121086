
#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include vector



/**
  * class Payment
  * 
  */

class Payment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Payment ();

  /**
   * Empty Destructor
   */
  virtual ~Payment ();

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
  void Add ()
  {
  }


  /**
   */
  void Update ()
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

  string CardNumber;
  int Amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of CardNumber
   * @param new_var the new value of CardNumber
   */
  void setCardNumber (string new_var)   {
      CardNumber = new_var;
  }

  /**
   * Get the value of CardNumber
   * @return the value of CardNumber
   */
  string getCardNumber ()   {
    return CardNumber;
  }

  /**
   * Set the value of Amount
   * @param new_var the new value of Amount
   */
  void setAmount (int new_var)   {
      Amount = new_var;
  }

  /**
   * Get the value of Amount
   * @return the value of Amount
   */
  int getAmount ()   {
    return Amount;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
