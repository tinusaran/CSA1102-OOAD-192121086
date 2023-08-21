
#ifndef ITEMS_H
#define ITEMS_H

#include <string>

/**
  * class Items
  * 
  */

class Items
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Items ();

  /**
   * Empty Destructor
   */
  virtual ~Items ();

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

  void id;
  void name;
  void category;
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
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of category
   * @param new_var the new value of category
   */
  void setCategory (void new_var)   {
      category = new_var;
  }

  /**
   * Get the value of category
   * @return the value of category
   */
  void getCategory ()   {
    return category;
  }
private:


  void initAttributes () ;

};

#endif // ITEMS_H
