
#ifndef USERCLASS_H
#define USERCLASS_H

#include <string>

/**
  * class Userclass
  * 
  */

class Userclass
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Userclass ();

  /**
   * Empty Destructor
   */
  virtual ~Userclass ();

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
  void Add_user ()
  {
  }


  /**
   */
  void Edit_User ()
  {
  }


  /**
   */
  void Delete_user ()
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

  void User_Id;
  void User_role;
  void User_Email;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of User_Id
   * @param new_var the new value of User_Id
   */
  void setUser_Id (void new_var)   {
      User_Id = new_var;
  }

  /**
   * Get the value of User_Id
   * @return the value of User_Id
   */
  void getUser_Id ()   {
    return User_Id;
  }

  /**
   * Set the value of User_role
   * @param new_var the new value of User_role
   */
  void setUser_role (void new_var)   {
      User_role = new_var;
  }

  /**
   * Get the value of User_role
   * @return the value of User_role
   */
  void getUser_role ()   {
    return User_role;
  }

  /**
   * Set the value of User_Email
   * @param new_var the new value of User_Email
   */
  void setUser_Email (void new_var)   {
      User_Email = new_var;
  }

  /**
   * Get the value of User_Email
   * @return the value of User_Email
   */
  void getUser_Email ()   {
    return User_Email;
  }
private:


  void initAttributes () ;

};

#endif // USERCLASS_H
