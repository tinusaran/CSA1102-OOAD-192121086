
#ifndef EXAM_DETAILS_H
#define EXAM_DETAILS_H

#include <string>

/**
  * class Exam_Details
  * 
  */

class Exam_Details
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Exam_Details ();

  /**
   * Empty Destructor
   */
  virtual ~Exam_Details ();

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
  void addExam ()
  {
  }


  /**
   */
  void uodateExam ()
  {
  }


  /**
   */
  void getExam ()
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

  string Exam_code;
  string Exam_Name;
  int Subject_Id;
  string Subject_Name;
  int Duration;
  int Fee;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Exam_code
   * @param new_var the new value of Exam_code
   */
  void setExam_code (string new_var)   {
      Exam_code = new_var;
  }

  /**
   * Get the value of Exam_code
   * @return the value of Exam_code
   */
  string getExam_code ()   {
    return Exam_code;
  }

  /**
   * Set the value of Exam_Name
   * @param new_var the new value of Exam_Name
   */
  void setExam_Name (string new_var)   {
      Exam_Name = new_var;
  }

  /**
   * Get the value of Exam_Name
   * @return the value of Exam_Name
   */
  string getExam_Name ()   {
    return Exam_Name;
  }

  /**
   * Set the value of Subject_Id
   * @param new_var the new value of Subject_Id
   */
  void setSubject_Id (int new_var)   {
      Subject_Id = new_var;
  }

  /**
   * Get the value of Subject_Id
   * @return the value of Subject_Id
   */
  int getSubject_Id ()   {
    return Subject_Id;
  }

  /**
   * Set the value of Subject_Name
   * @param new_var the new value of Subject_Name
   */
  void setSubject_Name (string new_var)   {
      Subject_Name = new_var;
  }

  /**
   * Get the value of Subject_Name
   * @return the value of Subject_Name
   */
  string getSubject_Name ()   {
    return Subject_Name;
  }

  /**
   * Set the value of Duration
   * @param new_var the new value of Duration
   */
  void setDuration (int new_var)   {
      Duration = new_var;
  }

  /**
   * Get the value of Duration
   * @return the value of Duration
   */
  int getDuration ()   {
    return Duration;
  }

  /**
   * Set the value of Fee
   * @param new_var the new value of Fee
   */
  void setFee (int new_var)   {
      Fee = new_var;
  }

  /**
   * Get the value of Fee
   * @return the value of Fee
   */
  int getFee ()   {
    return Fee;
  }
private:


  void initAttributes () ;

};

#endif // EXAM_DETAILS_H
