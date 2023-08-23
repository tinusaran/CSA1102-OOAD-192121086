
#ifndef STYLIST_H
#define STYLIST_H

#include <string>

/**
  * class stylist
  * 
  */

class stylist
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  stylist ();

  /**
   * Empty Destructor
   */
  virtual ~stylist ();

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
  void stylish ()
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

  string name;
  string stylish;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of stylish
   * @param new_var the new value of stylish
   */
  void setStylish (string new_var)   {
      stylish = new_var;
  }

  /**
   * Get the value of stylish
   * @return the value of stylish
   */
  string getStylish ()   {
    return stylish;
  }
private:


  void initAttributes () ;

};

#endif // STYLIST_H
