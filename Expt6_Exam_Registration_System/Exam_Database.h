
#ifndef EXAM_DATABASE_H
#define EXAM_DATABASE_H

#include <string>
#include vector



/**
  * class Exam_Database
  * 
  */

class Exam_Database
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Exam_Database ();

  /**
   * Empty Destructor
   */
  virtual ~Exam_Database ();

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
  void issue_passport ()
  {
  }


  /**
   */
  void validate ()
  {
  }


  /**
   */
  void confirm_applicant ()
  {
  }


  /**
   */
  void renew_passport ()
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

  void username;
  void password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername (void new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  void getUsername ()   {
    return username;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (void new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  void getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // EXAM_DATABASE_H
