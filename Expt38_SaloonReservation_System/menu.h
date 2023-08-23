
#ifndef MENU_H
#define MENU_H

#include <string>

/**
  * class menu
  * 
  */

class menu
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  menu ();

  /**
   * Empty Destructor
   */
  virtual ~menu ();

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
  void display ()
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

  string hair_style;
  string beard_style;
  string skin_care;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of hair_style
   * @param new_var the new value of hair_style
   */
  void setHair_style (string new_var)   {
      hair_style = new_var;
  }

  /**
   * Get the value of hair_style
   * @return the value of hair_style
   */
  string getHair_style ()   {
    return hair_style;
  }

  /**
   * Set the value of beard_style
   * @param new_var the new value of beard_style
   */
  void setBeard_style (string new_var)   {
      beard_style = new_var;
  }

  /**
   * Get the value of beard_style
   * @return the value of beard_style
   */
  string getBeard_style ()   {
    return beard_style;
  }

  /**
   * Set the value of skin_care
   * @param new_var the new value of skin_care
   */
  void setSkin_care (string new_var)   {
      skin_care = new_var;
  }

  /**
   * Get the value of skin_care
   * @return the value of skin_care
   */
  string getSkin_care ()   {
    return skin_care;
  }
private:


  void initAttributes () ;

};

#endif // MENU_H
