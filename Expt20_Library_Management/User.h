
#ifndef USER_H
#define USER_H

#include <string>
#include vector



/**
  * class User
  * 
  */

class User
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  User ();

  /**
   * Empty Destructor
   */
  virtual ~User ();

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
  void Verify ()
  {
  }


  /**
   */
  void Check_Account ()
  {
  }


  /**
   */
  void Get_book_info ()
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

  void Name;
  void ID;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }

  /**
   * Set the value of ID
   * @param new_var the new value of ID
   */
  void setID (void new_var)   {
      ID = new_var;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  void getID ()   {
    return ID;
  }
private:


  void initAttributes () ;

};

#endif // USER_H
