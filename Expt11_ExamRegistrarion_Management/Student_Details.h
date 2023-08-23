
#ifndef STUDENT_DETAILS_H
#define STUDENT_DETAILS_H

#include <string>

/**
  * class Student_Details
  * 
  */

class Student_Details
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Student_Details ();

  /**
   * Empty Destructor
   */
  virtual ~Student_Details ();

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
  void addStudent ()
  {
  }


  /**
   */
  void updateStudent ()
  {
  }


  /**
   */
  void getLogin ()
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

  string Student_Name;
  int Student_Id;
  int Dob;
  string gender;
  string qualification;
  string Address;
  int Mobile_Number;
  string Email_ID;
  string UserName;
  string Password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Student_Name
   * @param new_var the new value of Student_Name
   */
  void setStudent_Name (string new_var)   {
      Student_Name = new_var;
  }

  /**
   * Get the value of Student_Name
   * @return the value of Student_Name
   */
  string getStudent_Name ()   {
    return Student_Name;
  }

  /**
   * Set the value of Student_Id
   * @param new_var the new value of Student_Id
   */
  void setStudent_Id (int new_var)   {
      Student_Id = new_var;
  }

  /**
   * Get the value of Student_Id
   * @return the value of Student_Id
   */
  int getStudent_Id ()   {
    return Student_Id;
  }

  /**
   * Set the value of Dob
   * @param new_var the new value of Dob
   */
  void setDob (int new_var)   {
      Dob = new_var;
  }

  /**
   * Get the value of Dob
   * @return the value of Dob
   */
  int getDob ()   {
    return Dob;
  }

  /**
   * Set the value of gender
   * @param new_var the new value of gender
   */
  void setGender (string new_var)   {
      gender = new_var;
  }

  /**
   * Get the value of gender
   * @return the value of gender
   */
  string getGender ()   {
    return gender;
  }

  /**
   * Set the value of qualification
   * @param new_var the new value of qualification
   */
  void setQualification (string new_var)   {
      qualification = new_var;
  }

  /**
   * Get the value of qualification
   * @return the value of qualification
   */
  string getQualification ()   {
    return qualification;
  }

  /**
   * Set the value of Address
   * @param new_var the new value of Address
   */
  void setAddress (string new_var)   {
      Address = new_var;
  }

  /**
   * Get the value of Address
   * @return the value of Address
   */
  string getAddress ()   {
    return Address;
  }

  /**
   * Set the value of Mobile_Number
   * @param new_var the new value of Mobile_Number
   */
  void setMobile_Number (int new_var)   {
      Mobile_Number = new_var;
  }

  /**
   * Get the value of Mobile_Number
   * @return the value of Mobile_Number
   */
  int getMobile_Number ()   {
    return Mobile_Number;
  }

  /**
   * Set the value of Email_ID
   * @param new_var the new value of Email_ID
   */
  void setEmail_ID (string new_var)   {
      Email_ID = new_var;
  }

  /**
   * Get the value of Email_ID
   * @return the value of Email_ID
   */
  string getEmail_ID ()   {
    return Email_ID;
  }

  /**
   * Set the value of UserName
   * @param new_var the new value of UserName
   */
  void setUserName (string new_var)   {
      UserName = new_var;
  }

  /**
   * Get the value of UserName
   * @return the value of UserName
   */
  string getUserName ()   {
    return UserName;
  }

  /**
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (string new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  string getPassword ()   {
    return Password;
  }
private:


  void initAttributes () ;

};

#endif // STUDENT_DETAILS_H
