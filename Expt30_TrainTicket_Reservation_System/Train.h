
#ifndef TRAIN_H
#define TRAIN_H

#include <string>

/**
  * class Train
  * 
  */

class Train
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Train ();

  /**
   * Empty Destructor
   */
  virtual ~Train ();

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

  void Train_no;
  void Train_name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Train_no
   * @param new_var the new value of Train_no
   */
  void setTrain_no (void new_var)   {
      Train_no = new_var;
  }

  /**
   * Get the value of Train_no
   * @return the value of Train_no
   */
  void getTrain_no ()   {
    return Train_no;
  }

  /**
   * Set the value of Train_name
   * @param new_var the new value of Train_name
   */
  void setTrain_name (void new_var)   {
      Train_name = new_var;
  }

  /**
   * Get the value of Train_name
   * @return the value of Train_name
   */
  void getTrain_name ()   {
    return Train_name;
  }
private:


  void initAttributes () ;

};

#endif // TRAIN_H
