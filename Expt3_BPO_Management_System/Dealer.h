
#ifndef DEALER_H
#define DEALER_H

#include <string>

/**
  * class Dealer
  * 
  */

class Dealer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Dealer ();

  /**
   * Empty Destructor
   */
  virtual ~Dealer ();

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
  void payment ()
  {
  }


  /**
   */
  void delivery ()
  {
  }


  /**
   */
  void dealer ()
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

  void name;
  void availability;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of availability
   * @param new_var the new value of availability
   */
  void setAvailability (void new_var)   {
      availability = new_var;
  }

  /**
   * Get the value of availability
   * @return the value of availability
   */
  void getAvailability ()   {
    return availability;
  }
private:


  void initAttributes () ;

};

#endif // DEALER_H
