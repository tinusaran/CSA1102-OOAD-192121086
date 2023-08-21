
#ifndef PASSENGER_1_H
#define PASSENGER_1_H

#include <string>

/**
  * class passenger_1
  * 
  */

class passenger_1
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  passenger_1 ();

  /**
   * Empty Destructor
   */
  virtual ~passenger_1 ();

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
  void login ()
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

  void passenger_name;
  void passenger_age;
  void train_number;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of passenger_name
   * @param new_var the new value of passenger_name
   */
  void setPassenger_name (void new_var)   {
      passenger_name = new_var;
  }

  /**
   * Get the value of passenger_name
   * @return the value of passenger_name
   */
  void getPassenger_name ()   {
    return passenger_name;
  }

  /**
   * Set the value of passenger_age
   * @param new_var the new value of passenger_age
   */
  void setPassenger_age (void new_var)   {
      passenger_age = new_var;
  }

  /**
   * Get the value of passenger_age
   * @return the value of passenger_age
   */
  void getPassenger_age ()   {
    return passenger_age;
  }

  /**
   * Set the value of train_number
   * @param new_var the new value of train_number
   */
  void setTrain_number (void new_var)   {
      train_number = new_var;
  }

  /**
   * Get the value of train_number
   * @return the value of train_number
   */
  void getTrain_number ()   {
    return train_number;
  }
private:


  void initAttributes () ;

};

#endif // PASSENGER_1_H
