
#ifndef EMPLOYEE1_H
#define EMPLOYEE1_H

#include <string>

/**
  * class employee1
  * 
  */

class employee1
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  employee1 ();

  /**
   * Empty Destructor
   */
  virtual ~employee1 ();

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
  void leave_taken ()
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

  void emp_details;
  void salary;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of emp_details
   * @param new_var the new value of emp_details
   */
  void setEmp_details (void new_var)   {
      emp_details = new_var;
  }

  /**
   * Get the value of emp_details
   * @return the value of emp_details
   */
  void getEmp_details ()   {
    return emp_details;
  }

  /**
   * Set the value of salary
   * @param new_var the new value of salary
   */
  void setSalary (void new_var)   {
      salary = new_var;
  }

  /**
   * Get the value of salary
   * @return the value of salary
   */
  void getSalary ()   {
    return salary;
  }
private:


  void initAttributes () ;

};

#endif // EMPLOYEE1_H
