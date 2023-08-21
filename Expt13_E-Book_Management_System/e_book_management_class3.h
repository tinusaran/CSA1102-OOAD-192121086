
#ifndef E_BOOK_MANAGEMENT_CLASS3_H
#define E_BOOK_MANAGEMENT_CLASS3_H

#include <string>

/**
  * class e_book_management_class3
  * 
  */

class e_book_management_class3
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  e_book_management_class3 ();

  /**
   * Empty Destructor
   */
  virtual ~e_book_management_class3 ();

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
  void check_availability ()
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
  void verify_user;
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
   * Set the value of verify_user
   * @param new_var the new value of verify_user
   */
  void setVerify_user (void new_var)   {
      verify_user = new_var;
  }

  /**
   * Get the value of verify_user
   * @return the value of verify_user
   */
  void getVerify_user ()   {
    return verify_user;
  }
private:


  void initAttributes () ;

};

#endif // E_BOOK_MANAGEMENT_CLASS3_H
