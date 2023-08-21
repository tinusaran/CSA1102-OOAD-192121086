
#ifndef PAITENT_CLASS_H
#define PAITENT_CLASS_H

#include <string>

/**
  * class Paitent_class
  * 
  */

class Paitent_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Paitent_class ();

  /**
   * Empty Destructor
   */
  virtual ~Paitent_class ();

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
  void Add_patient ()
  {
  }


  /**
   */
  void Edit_patient_details ()
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

  void Patient_Id;
  void Patient_Details;
  void Patient_mobile;
  void Patient_username;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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

  /**
   * Set the value of Patient_Details
   * @param new_var the new value of Patient_Details
   */
  void setPatient_Details (void new_var)   {
      Patient_Details = new_var;
  }

  /**
   * Get the value of Patient_Details
   * @return the value of Patient_Details
   */
  void getPatient_Details ()   {
    return Patient_Details;
  }

  /**
   * Set the value of Patient_mobile
   * @param new_var the new value of Patient_mobile
   */
  void setPatient_mobile (void new_var)   {
      Patient_mobile = new_var;
  }

  /**
   * Get the value of Patient_mobile
   * @return the value of Patient_mobile
   */
  void getPatient_mobile ()   {
    return Patient_mobile;
  }

  /**
   * Set the value of Patient_username
   * @param new_var the new value of Patient_username
   */
  void setPatient_username (void new_var)   {
      Patient_username = new_var;
  }

  /**
   * Get the value of Patient_username
   * @return the value of Patient_username
   */
  void getPatient_username ()   {
    return Patient_username;
  }
private:


  void initAttributes () ;

};

#endif // PAITENT_CLASS_H
