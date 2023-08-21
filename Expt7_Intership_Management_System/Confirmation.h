
#ifndef CONFIRMATION_H
#define CONFIRMATION_H

#include <string>
#include vector



/**
  * class Confirmation
  * 
  */

class Confirmation
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Confirmation ();

  /**
   * Empty Destructor
   */
  virtual ~Confirmation ();

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
  void login ()
  {
  }


  /**
   */
  void Register ()
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
  string father_name;
  int date_of_birth;
  string permanent_address;
  void email_id;
  int apllication_number;
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
   * Set the value of father_name
   * @param new_var the new value of father_name
   */
  void setFather_name (string new_var)   {
      father_name = new_var;
  }

  /**
   * Get the value of father_name
   * @return the value of father_name
   */
  string getFather_name ()   {
    return father_name;
  }

  /**
   * Set the value of date_of_birth
   * @param new_var the new value of date_of_birth
   */
  void setDate_of_birth (int new_var)   {
      date_of_birth = new_var;
  }

  /**
   * Get the value of date_of_birth
   * @return the value of date_of_birth
   */
  int getDate_of_birth ()   {
    return date_of_birth;
  }

  /**
   * Set the value of permanent_address
   * @param new_var the new value of permanent_address
   */
  void setPermanent_address (string new_var)   {
      permanent_address = new_var;
  }

  /**
   * Get the value of permanent_address
   * @return the value of permanent_address
   */
  string getPermanent_address ()   {
    return permanent_address;
  }

  /**
   * Set the value of email_id
   * @param new_var the new value of email_id
   */
  void setEmail_id (void new_var)   {
      email_id = new_var;
  }

  /**
   * Get the value of email_id
   * @return the value of email_id
   */
  void getEmail_id ()   {
    return email_id;
  }

  /**
   * Set the value of apllication_number
   * @param new_var the new value of apllication_number
   */
  void setApllication_number (int new_var)   {
      apllication_number = new_var;
  }

  /**
   * Get the value of apllication_number
   * @return the value of apllication_number
   */
  int getApllication_number ()   {
    return apllication_number;
  }
private:


  void initAttributes () ;

};

#endif // CONFIRMATION_H
