
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

  void Train_name;
  void Timming;
  new_class Train_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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

  /**
   * Set the value of Timming
   * @param new_var the new value of Timming
   */
  void setTimming (void new_var)   {
      Timming = new_var;
  }

  /**
   * Get the value of Timming
   * @return the value of Timming
   */
  void getTimming ()   {
    return Timming;
  }

  /**
   * Set the value of Train_type
   * @param new_var the new value of Train_type
   */
  void setTrain_type (new_class new_var)   {
      Train_type = new_var;
  }

  /**
   * Get the value of Train_type
   * @return the value of Train_type
   */
  new_class getTrain_type ()   {
    return Train_type;
  }
private:


  void initAttributes () ;

};

#endif // TRAIN_H
