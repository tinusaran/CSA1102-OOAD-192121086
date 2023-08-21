
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

/**
  * class Student
  * 
  */

class Student
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Student ();

  /**
   * Empty Destructor
   */
  virtual ~Student ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void Class;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Class
   * @param new_var the new value of Class
   */
  void setClass (void new_var)   {
      Class = new_var;
  }

  /**
   * Get the value of Class
   * @return the value of Class
   */
  void getClass ()   {
    return Class;
  }
private:


  void initAttributes () ;

};

#endif // STUDENT_H
