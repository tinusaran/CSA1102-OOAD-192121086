
#ifndef APPLICANT_H
#define APPLICANT_H

#include <string>

/**
  * class Applicant
  * 
  */

class Applicant
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Applicant ();

  /**
   * Empty Destructor
   */
  virtual ~Applicant ();

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
  void Apply_passport ()
  {
  }


  /**
   */
  void Proof_Submission ()
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

  void Applicant_Name;
  void Applicant_Details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Applicant_Name
   * @param new_var the new value of Applicant_Name
   */
  void setApplicant_Name (void new_var)   {
      Applicant_Name = new_var;
  }

  /**
   * Get the value of Applicant_Name
   * @return the value of Applicant_Name
   */
  void getApplicant_Name ()   {
    return Applicant_Name;
  }

  /**
   * Set the value of Applicant_Details
   * @param new_var the new value of Applicant_Details
   */
  void setApplicant_Details (void new_var)   {
      Applicant_Details = new_var;
  }

  /**
   * Get the value of Applicant_Details
   * @return the value of Applicant_Details
   */
  void getApplicant_Details ()   {
    return Applicant_Details;
  }
private:


  void initAttributes () ;

};

#endif // APPLICANT_H
