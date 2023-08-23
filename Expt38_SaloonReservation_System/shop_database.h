
#ifndef SHOP_DATABASE_H
#define SHOP_DATABASE_H

#include <string>

/**
  * class shop_database
  * 
  */

class shop_database
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  shop_database ();

  /**
   * Empty Destructor
   */
  virtual ~shop_database ();

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
  void update ()
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

  char save_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of save_details
   * @param new_var the new value of save_details
   */
  void setSave_details (char new_var)   {
      save_details = new_var;
  }

  /**
   * Get the value of save_details
   * @return the value of save_details
   */
  char getSave_details ()   {
    return save_details;
  }
private:


  void initAttributes () ;

};

#endif // SHOP_DATABASE_H
