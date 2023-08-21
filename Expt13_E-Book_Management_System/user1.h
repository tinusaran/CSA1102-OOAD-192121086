
#ifndef USER1_H
#define USER1_H

#include <string>

/**
  * class user1
  * 
  */

class user1
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  user1 ();

  /**
   * Empty Destructor
   */
  virtual ~user1 ();

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
  void surf_books ()
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

  void login;
  void logout;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of login
   * @param new_var the new value of login
   */
  void setLogin (void new_var)   {
      login = new_var;
  }

  /**
   * Get the value of login
   * @return the value of login
   */
  void getLogin ()   {
    return login;
  }

  /**
   * Set the value of logout
   * @param new_var the new value of logout
   */
  void setLogout (void new_var)   {
      logout = new_var;
  }

  /**
   * Get the value of logout
   * @return the value of logout
   */
  void getLogout ()   {
    return logout;
  }
private:


  void initAttributes () ;

};

#endif // USER1_H
