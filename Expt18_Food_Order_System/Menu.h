
#ifndef MENU_H
#define MENU_H

#include <string>
#include vector



/**
  * class Menu
  * 
  */

class Menu
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Menu ();

  /**
   * Empty Destructor
   */
  virtual ~Menu ();

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
  void Add ()
  {
  }


  /**
   */
  void Update ()
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

  int ID;
  string Details;
  string List_of_dishes;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ID
   * @param new_var the new value of ID
   */
  void setID (int new_var)   {
      ID = new_var;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  int getID ()   {
    return ID;
  }

  /**
   * Set the value of Details
   * @param new_var the new value of Details
   */
  void setDetails (string new_var)   {
      Details = new_var;
  }

  /**
   * Get the value of Details
   * @return the value of Details
   */
  string getDetails ()   {
    return Details;
  }

  /**
   * Set the value of List_of_dishes
   * @param new_var the new value of List_of_dishes
   */
  void setList_of_dishes (string new_var)   {
      List_of_dishes = new_var;
  }

  /**
   * Get the value of List_of_dishes
   * @return the value of List_of_dishes
   */
  string getList_of_dishes ()   {
    return List_of_dishes;
  }
private:


  void initAttributes () ;

};

#endif // MENU_H
