
#ifndef NURSE_CLASS_H
#define NURSE_CLASS_H

#include <string>

/**
  * class Nurse_class
  * 
  */

class Nurse_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Nurse_class ();

  /**
   * Empty Destructor
   */
  virtual ~Nurse_class ();

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
  void Incharge ()
  {
  }


  /**
   */
  void Add_Nurse ()
  {
  }


  /**
   */
  void Search_Nurse ()
  {
  }


  /**
   */
  void Delete_Nurse ()
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

  void Nurse_name;
  void Nurse_role;
  void Nurse_emali;
  void Nurse_speacilist;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Nurse_name
   * @param new_var the new value of Nurse_name
   */
  void setNurse_name (void new_var)   {
      Nurse_name = new_var;
  }

  /**
   * Get the value of Nurse_name
   * @return the value of Nurse_name
   */
  void getNurse_name ()   {
    return Nurse_name;
  }

  /**
   * Set the value of Nurse_role
   * @param new_var the new value of Nurse_role
   */
  void setNurse_role (void new_var)   {
      Nurse_role = new_var;
  }

  /**
   * Get the value of Nurse_role
   * @return the value of Nurse_role
   */
  void getNurse_role ()   {
    return Nurse_role;
  }

  /**
   * Set the value of Nurse_emali
   * @param new_var the new value of Nurse_emali
   */
  void setNurse_emali (void new_var)   {
      Nurse_emali = new_var;
  }

  /**
   * Get the value of Nurse_emali
   * @return the value of Nurse_emali
   */
  void getNurse_emali ()   {
    return Nurse_emali;
  }

  /**
   * Set the value of Nurse_speacilist
   * @param new_var the new value of Nurse_speacilist
   */
  void setNurse_speacilist (void new_var)   {
      Nurse_speacilist = new_var;
  }

  /**
   * Get the value of Nurse_speacilist
   * @return the value of Nurse_speacilist
   */
  void getNurse_speacilist ()   {
    return Nurse_speacilist;
  }
private:


  void initAttributes () ;

};

#endif // NURSE_CLASS_H
