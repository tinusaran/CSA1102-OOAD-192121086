
#ifndef BERTH_CLASS_H
#define BERTH_CLASS_H

#include <string>

/**
  * class Berth_class
  * 
  */

class Berth_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Berth_class ();

  /**
   * Empty Destructor
   */
  virtual ~Berth_class ();

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
  void Get_berth ()
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

  void Upper_berth;
  void lower_berth;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Upper_berth
   * @param new_var the new value of Upper_berth
   */
  void setUpper_berth (void new_var)   {
      Upper_berth = new_var;
  }

  /**
   * Get the value of Upper_berth
   * @return the value of Upper_berth
   */
  void getUpper_berth ()   {
    return Upper_berth;
  }

  /**
   * Set the value of lower_berth
   * @param new_var the new value of lower_berth
   */
  void setLower_berth (void new_var)   {
      lower_berth = new_var;
  }

  /**
   * Get the value of lower_berth
   * @return the value of lower_berth
   */
  void getLower_berth ()   {
    return lower_berth;
  }
private:


  void initAttributes () ;

};

#endif // BERTH_CLASS_H
