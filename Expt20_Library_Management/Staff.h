
#ifndef STAFF_H
#define STAFF_H

#include <string>

/**
  * class Staff
  * 
  */

class Staff
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Staff ();

  /**
   * Empty Destructor
   */
  virtual ~Staff ();

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

  void Dept;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Dept
   * @param new_var the new value of Dept
   */
  void setDept (void new_var)   {
      Dept = new_var;
  }

  /**
   * Get the value of Dept
   * @return the value of Dept
   */
  void getDept ()   {
    return Dept;
  }
private:


  void initAttributes () ;

};

#endif // STAFF_H
