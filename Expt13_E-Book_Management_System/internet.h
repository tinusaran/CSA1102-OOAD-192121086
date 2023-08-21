
#ifndef INTERNET_H
#define INTERNET_H

#include <string>

/**
  * class internet
  * 
  */

class internet
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  internet ();

  /**
   * Empty Destructor
   */
  virtual ~internet ();

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
  void verify ()
  {
  }


  /**
   */
  void status ()
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

  void enter_id;
  void downlode;
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
   * Set the value of enter_id
   * @param new_var the new value of enter_id
   */
  void setEnter_id (void new_var)   {
      enter_id = new_var;
  }

  /**
   * Get the value of enter_id
   * @return the value of enter_id
   */
  void getEnter_id ()   {
    return enter_id;
  }

  /**
   * Set the value of downlode
   * @param new_var the new value of downlode
   */
  void setDownlode (void new_var)   {
      downlode = new_var;
  }

  /**
   * Get the value of downlode
   * @return the value of downlode
   */
  void getDownlode ()   {
    return downlode;
  }

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

#endif // INTERNET_H
