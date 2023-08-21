
#ifndef CUSTO_H
#define CUSTO_H

#include <string>

/**
  * class custo
  * 
  */

class custo
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  custo ();

  /**
   * Empty Destructor
   */
  virtual ~custo ();

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
  void payment ()
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

  void place_order;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of place_order
   * @param new_var the new value of place_order
   */
  void setPlace_order (void new_var)   {
      place_order = new_var;
  }

  /**
   * Get the value of place_order
   * @return the value of place_order
   */
  void getPlace_order ()   {
    return place_order;
  }
private:


  void initAttributes () ;

};

#endif // CUSTO_H
