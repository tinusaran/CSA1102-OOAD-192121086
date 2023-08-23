
#ifndef TRAIN_TYPE_H
#define TRAIN_TYPE_H

#include <string>

/**
  * class Train_Type
  * 
  */

class Train_Type
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Train_Type ();

  /**
   * Empty Destructor
   */
  virtual ~Train_Type ();

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
  void Get_Train_Type ()
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

  void Express;
  void Passenger;
  void Super_Fast;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Express
   * @param new_var the new value of Express
   */
  void setExpress (void new_var)   {
      Express = new_var;
  }

  /**
   * Get the value of Express
   * @return the value of Express
   */
  void getExpress ()   {
    return Express;
  }

  /**
   * Set the value of Passenger
   * @param new_var the new value of Passenger
   */
  void setPassenger (void new_var)   {
      Passenger = new_var;
  }

  /**
   * Get the value of Passenger
   * @return the value of Passenger
   */
  void getPassenger ()   {
    return Passenger;
  }

  /**
   * Set the value of Super_Fast
   * @param new_var the new value of Super_Fast
   */
  void setSuper_Fast (void new_var)   {
      Super_Fast = new_var;
  }

  /**
   * Get the value of Super_Fast
   * @return the value of Super_Fast
   */
  void getSuper_Fast ()   {
    return Super_Fast;
  }
private:


  void initAttributes () ;

};

#endif // TRAIN_TYPE_H
