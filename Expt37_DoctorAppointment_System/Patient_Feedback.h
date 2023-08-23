
#ifndef PATIENT_FEEDBACK_H
#define PATIENT_FEEDBACK_H

#include <string>

/**
  * class Patient_Feedback
  * 
  */

class Patient_Feedback
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Patient_Feedback ();

  /**
   * Empty Destructor
   */
  virtual ~Patient_Feedback ();

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
  void GetFeedBack ()
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

  void Patient_Name;
  void Patient_Id;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Patient_Name
   * @param new_var the new value of Patient_Name
   */
  void setPatient_Name (void new_var)   {
      Patient_Name = new_var;
  }

  /**
   * Get the value of Patient_Name
   * @return the value of Patient_Name
   */
  void getPatient_Name ()   {
    return Patient_Name;
  }

  /**
   * Set the value of Patient_Id
   * @param new_var the new value of Patient_Id
   */
  void setPatient_Id (void new_var)   {
      Patient_Id = new_var;
  }

  /**
   * Get the value of Patient_Id
   * @return the value of Patient_Id
   */
  void getPatient_Id ()   {
    return Patient_Id;
  }
private:


  void initAttributes () ;

};

#endif // PATIENT_FEEDBACK_H
