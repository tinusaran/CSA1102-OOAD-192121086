
#ifndef ROLE_H
#define ROLE_H

#include <string>

/**
  * class Role
  * 
  */

class Role
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Role ();

  /**
   * Empty Destructor
   */
  virtual ~Role ();

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

  void Role_Id;
  void Role_Discription;
  void Role_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Role_Id
   * @param new_var the new value of Role_Id
   */
  void setRole_Id (void new_var)   {
      Role_Id = new_var;
  }

  /**
   * Get the value of Role_Id
   * @return the value of Role_Id
   */
  void getRole_Id ()   {
    return Role_Id;
  }

  /**
   * Set the value of Role_Discription
   * @param new_var the new value of Role_Discription
   */
  void setRole_Discription (void new_var)   {
      Role_Discription = new_var;
  }

  /**
   * Get the value of Role_Discription
   * @return the value of Role_Discription
   */
  void getRole_Discription ()   {
    return Role_Discription;
  }

  /**
   * Set the value of Role_type
   * @param new_var the new value of Role_type
   */
  void setRole_type (void new_var)   {
      Role_type = new_var;
  }

  /**
   * Get the value of Role_type
   * @return the value of Role_type
   */
  void getRole_type ()   {
    return Role_type;
  }
private:


  void initAttributes () ;

};

#endif // ROLE_H
