
#ifndef RENTALS_H
#define RENTALS_H

#include <string>

/**
  * class rentals
  * 
  */

class rentals
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  rentals ();

  /**
   * Empty Destructor
   */
  virtual ~rentals ();

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
  void add ()
  {
  }


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

  int id;
  string name;
  int price;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (int new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  int getId ()   {
    return id;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of price
   * @param new_var the new value of price
   */
  void setPrice (int new_var)   {
      price = new_var;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  int getPrice ()   {
    return price;
  }
private:


  void initAttributes () ;

};

#endif // RENTALS_H
