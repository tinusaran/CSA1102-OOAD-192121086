
#ifndef REGISTER_H
#define REGISTER_H

#include <string>

/**
  * class Register
  * 
  */

class Register
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Register ();

  /**
   * Empty Destructor
   */
  virtual ~Register ();

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
  void GetRegister ()
  {
  }


  /**
   */
  void cancelReg ()
  {
  }


  /**
   */
  void verifyInfo ()
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

  void Student_Id;
  void Exam_code;
  void Fee;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Student_Id
   * @param new_var the new value of Student_Id
   */
  void setStudent_Id (void new_var)   {
      Student_Id = new_var;
  }

  /**
   * Get the value of Student_Id
   * @return the value of Student_Id
   */
  void getStudent_Id ()   {
    return Student_Id;
  }

  /**
   * Set the value of Exam_code
   * @param new_var the new value of Exam_code
   */
  void setExam_code (void new_var)   {
      Exam_code = new_var;
  }

  /**
   * Get the value of Exam_code
   * @return the value of Exam_code
   */
  void getExam_code ()   {
    return Exam_code;
  }

  /**
   * Set the value of Fee
   * @param new_var the new value of Fee
   */
  void setFee (void new_var)   {
      Fee = new_var;
  }

  /**
   * Get the value of Fee
   * @return the value of Fee
   */
  void getFee ()   {
    return Fee;
  }
private:


  void initAttributes () ;

};

#endif // REGISTER_H
