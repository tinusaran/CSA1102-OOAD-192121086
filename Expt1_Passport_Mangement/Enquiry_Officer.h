
#ifndef ENQUIRY_OFFICER_H
#define ENQUIRY_OFFICER_H

#include <string>

/**
  * class Enquiry_Officer
  * 
  */

class Enquiry_Officer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Enquiry_Officer ();

  /**
   * Empty Destructor
   */
  virtual ~Enquiry_Officer ();

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
  void Passport_Issue ()
  {
  }


  /**
   */
  void Passport_renewal ()
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

  void Details_Verification;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Details_Verification
   * @param new_var the new value of Details_Verification
   */
  void setDetails_Verification (void new_var)   {
      Details_Verification = new_var;
  }

  /**
   * Get the value of Details_Verification
   * @return the value of Details_Verification
   */
  void getDetails_Verification ()   {
    return Details_Verification;
  }
private:


  void initAttributes () ;

};

#endif // ENQUIRY_OFFICER_H
