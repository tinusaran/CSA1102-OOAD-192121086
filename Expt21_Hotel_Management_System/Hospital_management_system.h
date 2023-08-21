
#ifndef HOSPITAL_MANAGEMENT_SYSTEM_H
#define HOSPITAL_MANAGEMENT_SYSTEM_H

#include <string>

/**
  * class Hospital_management_system
  * 
  */

class Hospital_management_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Hospital_management_system ();

  /**
   * Empty Destructor
   */
  virtual ~Hospital_management_system ();

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

  void User_Detail;
  void Patient_Detail;
  void Medicines_Detail;
  void Doctor_details;
  void Nurse_Details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of User_Detail
   * @param new_var the new value of User_Detail
   */
  void setUser_Detail (void new_var)   {
      User_Detail = new_var;
  }

  /**
   * Get the value of User_Detail
   * @return the value of User_Detail
   */
  void getUser_Detail ()   {
    return User_Detail;
  }

  /**
   * Set the value of Patient_Detail
   * @param new_var the new value of Patient_Detail
   */
  void setPatient_Detail (void new_var)   {
      Patient_Detail = new_var;
  }

  /**
   * Get the value of Patient_Detail
   * @return the value of Patient_Detail
   */
  void getPatient_Detail ()   {
    return Patient_Detail;
  }

  /**
   * Set the value of Medicines_Detail
   * @param new_var the new value of Medicines_Detail
   */
  void setMedicines_Detail (void new_var)   {
      Medicines_Detail = new_var;
  }

  /**
   * Get the value of Medicines_Detail
   * @return the value of Medicines_Detail
   */
  void getMedicines_Detail ()   {
    return Medicines_Detail;
  }

  /**
   * Set the value of Doctor_details
   * @param new_var the new value of Doctor_details
   */
  void setDoctor_details (void new_var)   {
      Doctor_details = new_var;
  }

  /**
   * Get the value of Doctor_details
   * @return the value of Doctor_details
   */
  void getDoctor_details ()   {
    return Doctor_details;
  }

  /**
   * Set the value of Nurse_Details
   * @param new_var the new value of Nurse_Details
   */
  void setNurse_Details (void new_var)   {
      Nurse_Details = new_var;
  }

  /**
   * Get the value of Nurse_Details
   * @return the value of Nurse_Details
   */
  void getNurse_Details ()   {
    return Nurse_Details;
  }
private:


  void initAttributes () ;

};

#endif // HOSPITAL_MANAGEMENT_SYSTEM_H
