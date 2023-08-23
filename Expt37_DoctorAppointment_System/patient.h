
#ifndef PATIENT_H
#define PATIENT_H

#include <string>

/**
  * class patient
  * 
  */

class patient
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  patient ();

  /**
   * Empty Destructor
   */
  virtual ~patient ();

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
  void add_patient ()
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

  string name;
  string address;
  string email;
  int mobile;
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
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (string new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  string getAddress ()   {
    return address;
  }

  /**
   * Set the value of email
   * @param new_var the new value of email
   */
  void setEmail (string new_var)   {
      email = new_var;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  string getEmail ()   {
    return email;
  }

  /**
   * Set the value of mobile
   * @param new_var the new value of mobile
   */
  void setMobile (int new_var)   {
      mobile = new_var;
  }

  /**
   * Get the value of mobile
   * @return the value of mobile
   */
  int getMobile ()   {
    return mobile;
  }
private:


  void initAttributes () ;

};

#endif // PATIENT_H
