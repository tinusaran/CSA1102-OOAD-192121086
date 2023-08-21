
#ifndef NEW_REGISTRATION_H
#define NEW_REGISTRATION_H

#include <string>

/**
  * class New_Registration
  * 
  */

class New_Registration
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  New_Registration ();

  /**
   * Empty Destructor
   */
  virtual ~New_Registration ();

  // Static Public attributes
  //  

  // Public attributes
  //  

  string Name;
  Number Age;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (string new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  string getName ()   {
    return Name;
  }

  /**
   * Set the value of Age
   * @param new_var the new value of Age
   */
  void setAge (Number new_var)   {
      Age = new_var;
  }

  /**
   * Get the value of Age
   * @return the value of Age
   */
  Number getAge ()   {
    return Age;
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

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:


  void initAttributes () ;

};

#endif // NEW_REGISTRATION_H
