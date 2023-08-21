
#ifndef DATABASE_HR_H
#define DATABASE_HR_H

#include <string>

/**
  * class Database_HR
  * 
  */

class Database_HR
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Database_HR ();

  /**
   * Empty Destructor
   */
  virtual ~Database_HR ();

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
  void Get_details ()
  {
  }


  /**
   */
  void Update_Details ()
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
private:


  void initAttributes () ;

};

#endif // DATABASE_HR_H
