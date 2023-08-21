
#ifndef ONLINE_COURSE_REGISTRATION_H
#define ONLINE_COURSE_REGISTRATION_H

#include <string>

/**
  * class Online_Course_registration
  * 
  */

class Online_Course_registration
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Online_Course_registration ();

  /**
   * Empty Destructor
   */
  virtual ~Online_Course_registration ();

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

  void Student_Details;
  void University_Details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Student_Details
   * @param new_var the new value of Student_Details
   */
  void setStudent_Details (void new_var)   {
      Student_Details = new_var;
  }

  /**
   * Get the value of Student_Details
   * @return the value of Student_Details
   */
  void getStudent_Details ()   {
    return Student_Details;
  }

  /**
   * Set the value of University_Details
   * @param new_var the new value of University_Details
   */
  void setUniversity_Details (void new_var)   {
      University_Details = new_var;
  }

  /**
   * Get the value of University_Details
   * @return the value of University_Details
   */
  void getUniversity_Details ()   {
    return University_Details;
  }
private:


  void initAttributes () ;

};

#endif // ONLINE_COURSE_REGISTRATION_H
