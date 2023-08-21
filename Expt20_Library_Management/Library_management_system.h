
#ifndef LIBRARY_MANAGEMENT_SYSTEM_H
#define LIBRARY_MANAGEMENT_SYSTEM_H

#include <string>
#include vector



/**
  * class Library_management_system
  * 
  */

class Library_management_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Library_management_system ();

  /**
   * Empty Destructor
   */
  virtual ~Library_management_system ();

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
  void Login ()
  {
  }


  /**
   */
  void Register ()
  {
  }


  /**
   */
  void Logout ()
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

  void UserType;
  void UserName;
  void Password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of UserType
   * @param new_var the new value of UserType
   */
  void setUserType (void new_var)   {
      UserType = new_var;
  }

  /**
   * Get the value of UserType
   * @return the value of UserType
   */
  void getUserType ()   {
    return UserType;
  }

  /**
   * Set the value of UserName
   * @param new_var the new value of UserName
   */
  void setUserName (void new_var)   {
      UserName = new_var;
  }

  /**
   * Get the value of UserName
   * @return the value of UserName
   */
  void getUserName ()   {
    return UserName;
  }

  /**
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (void new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  void getPassword ()   {
    return Password;
  }
private:


  void initAttributes () ;

};

#endif // LIBRARY_MANAGEMENT_SYSTEM_H
