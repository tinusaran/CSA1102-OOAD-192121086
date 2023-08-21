
#ifndef POLICY_CLASS_H
#define POLICY_CLASS_H

#include <string>

/**
  * class Policy_class
  * 
  */

class Policy_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Policy_class ();

  /**
   * Empty Destructor
   */
  virtual ~Policy_class ();

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
  void add_new_policy ()
  {
  }


  /**
   */
  void Update_new_policy ()
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

  void Policy_Id;
  void Policy_Name;
  void Policy_Admin;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Policy_Id
   * @param new_var the new value of Policy_Id
   */
  void setPolicy_Id (void new_var)   {
      Policy_Id = new_var;
  }

  /**
   * Get the value of Policy_Id
   * @return the value of Policy_Id
   */
  void getPolicy_Id ()   {
    return Policy_Id;
  }

  /**
   * Set the value of Policy_Name
   * @param new_var the new value of Policy_Name
   */
  void setPolicy_Name (void new_var)   {
      Policy_Name = new_var;
  }

  /**
   * Get the value of Policy_Name
   * @return the value of Policy_Name
   */
  void getPolicy_Name ()   {
    return Policy_Name;
  }

  /**
   * Set the value of Policy_Admin
   * @param new_var the new value of Policy_Admin
   */
  void setPolicy_Admin (void new_var)   {
      Policy_Admin = new_var;
  }

  /**
   * Get the value of Policy_Admin
   * @return the value of Policy_Admin
   */
  void getPolicy_Admin ()   {
    return Policy_Admin;
  }
private:


  void initAttributes () ;

};

#endif // POLICY_CLASS_H
