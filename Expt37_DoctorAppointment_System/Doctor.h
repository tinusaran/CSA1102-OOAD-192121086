
#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

/**
  * class Doctor
  * 
  */

class Doctor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Doctor ();

  /**
   * Empty Destructor
   */
  virtual ~Doctor ();

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
  void doctordetails ()
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
  int id;
  int mobile;
  string email;
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
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (int new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  int getId ()   {
    return id;
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
private:


  void initAttributes () ;

};

#endif // DOCTOR_H
