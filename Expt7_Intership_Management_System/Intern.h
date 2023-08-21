
#ifndef INTERN_H
#define INTERN_H

#include <string>

/**
  * class Intern
  * 
  */

class Intern
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Intern ();

  /**
   * Empty Destructor
   */
  virtual ~Intern ();

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
  void issue_of_passport ()
  {
  }


  /**
   */
  void renewal_of_passport ()
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

  void verification_of_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of verification_of_details
   * @param new_var the new value of verification_of_details
   */
  void setVerification_of_details (void new_var)   {
      verification_of_details = new_var;
  }

  /**
   * Get the value of verification_of_details
   * @return the value of verification_of_details
   */
  void getVerification_of_details ()   {
    return verification_of_details;
  }
private:


  void initAttributes () ;

};

#endif // INTERN_H
