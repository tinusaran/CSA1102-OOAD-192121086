
#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

/**
  * class Package
  * 
  */

class Package
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Package ();

  /**
   * Empty Destructor
   */
  virtual ~Package ();

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
  void GetPackageDetails ()
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

  string Name;
  int Id;
  string Package_Type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (string new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  string getName ()   {
    return Name;
  }

  /**
   * Set the value of Id
   * @param new_var the new value of Id
   */
  void setId (int new_var)   {
      Id = new_var;
  }

  /**
   * Get the value of Id
   * @return the value of Id
   */
  int getId ()   {
    return Id;
  }

  /**
   * Set the value of Package_Type
   * @param new_var the new value of Package_Type
   */
  void setPackage_Type (string new_var)   {
      Package_Type = new_var;
  }

  /**
   * Get the value of Package_Type
   * @return the value of Package_Type
   */
  string getPackage_Type ()   {
    return Package_Type;
  }
private:


  void initAttributes () ;

};

#endif // PACKAGE_H
