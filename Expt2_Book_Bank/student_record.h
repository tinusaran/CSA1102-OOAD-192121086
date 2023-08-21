
#ifndef STUDENT_RECORD_H
#define STUDENT_RECORD_H

#include <string>
#include vector



/**
  * class student_record
  * 
  */

class student_record
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  student_record ();

  /**
   * Empty Destructor
   */
  virtual ~student_record ();

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
  void email_id;
  int register_number;
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
   * Set the value of register_number
   * @param new_var the new value of register_number
   */
  void setRegister_number (int new_var)   {
      register_number = new_var;
  }

  /**
   * Get the value of register_number
   * @return the value of register_number
   */
  int getRegister_number ()   {
    return register_number;
  }
private:


  void initAttributes () ;

};

#endif // STUDENT_RECORD_H
