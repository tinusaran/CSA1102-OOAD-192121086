
#ifndef DISH_H
#define DISH_H

#include <string>
#include vector



/**
  * class Dish
  * 
  */

class Dish
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Dish ();

  /**
   * Empty Destructor
   */
  virtual ~Dish ();

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
  string Name;
  int Price;
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
   * Set the value of Price
   * @param new_var the new value of Price
   */
  void setPrice (int new_var)   {
      Price = new_var;
  }

  /**
   * Get the value of Price
   * @return the value of Price
   */
  int getPrice ()   {
    return Price;
  }
private:


  void initAttributes () ;

};

#endif // DISH_H
