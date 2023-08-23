
#ifndef PAYMENT_METHOD_H
#define PAYMENT_METHOD_H

#include <string>

/**
  * class Payment_Method
  * 
  */

class Payment_Method
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Payment_Method ();

  /**
   * Empty Destructor
   */
  virtual ~Payment_Method ();

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
  void Make_payment ()
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

  void Id;
  void Type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Id
   * @param new_var the new value of Id
   */
  void setId (void new_var)   {
      Id = new_var;
  }

  /**
   * Get the value of Id
   * @return the value of Id
   */
  void getId ()   {
    return Id;
  }

  /**
   * Set the value of Type
   * @param new_var the new value of Type
   */
  void setType (void new_var)   {
      Type = new_var;
  }

  /**
   * Get the value of Type
   * @return the value of Type
   */
  void getType ()   {
    return Type;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_METHOD_H
