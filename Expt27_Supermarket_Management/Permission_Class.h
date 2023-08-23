
#ifndef PERMISSION_CLASS_H
#define PERMISSION_CLASS_H

#include <string>
#include vector



/**
  * class Permission_Class
  * 
  */

class Permission_Class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Permission_Class ();

  /**
   * Empty Destructor
   */
  virtual ~Permission_Class ();

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
  void addPermission ()
  {
  }


  /**
   */
  void editPermission ()
  {
  }


  /**
   */
  void deletePermission ()
  {
  }


  /**
   */
  void searchPermission ()
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

  int permission_id;
  int permission_role_id;
  string permission_title;
  string permission_module;
  string permission_description;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of permission_id
   * @param new_var the new value of permission_id
   */
  void setPermission_id (int new_var)   {
      permission_id = new_var;
  }

  /**
   * Get the value of permission_id
   * @return the value of permission_id
   */
  int getPermission_id ()   {
    return permission_id;
  }

  /**
   * Set the value of permission_role_id
   * @param new_var the new value of permission_role_id
   */
  void setPermission_role_id (int new_var)   {
      permission_role_id = new_var;
  }

  /**
   * Get the value of permission_role_id
   * @return the value of permission_role_id
   */
  int getPermission_role_id ()   {
    return permission_role_id;
  }

  /**
   * Set the value of permission_title
   * @param new_var the new value of permission_title
   */
  void setPermission_title (string new_var)   {
      permission_title = new_var;
  }

  /**
   * Get the value of permission_title
   * @return the value of permission_title
   */
  string getPermission_title ()   {
    return permission_title;
  }

  /**
   * Set the value of permission_module
   * @param new_var the new value of permission_module
   */
  void setPermission_module (string new_var)   {
      permission_module = new_var;
  }

  /**
   * Get the value of permission_module
   * @return the value of permission_module
   */
  string getPermission_module ()   {
    return permission_module;
  }

  /**
   * Set the value of permission_description
   * @param new_var the new value of permission_description
   */
  void setPermission_description (string new_var)   {
      permission_description = new_var;
  }

  /**
   * Get the value of permission_description
   * @return the value of permission_description
   */
  string getPermission_description ()   {
    return permission_description;
  }
private:


  void initAttributes () ;

};

#endif // PERMISSION_CLASS_H
