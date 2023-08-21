
#ifndef FINANCE_H
#define FINANCE_H

#include <string>

/**
  * class Finance
  * 
  */

class Finance
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Finance ();

  /**
   * Empty Destructor
   */
  virtual ~Finance ();

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
  void Pooling_of_funds ()
  {
  }


  /**
   */
  void Economic_development ()
  {
  }


  /**
   */
  void Better_decision_making ()
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

  void Balance;
  void DataBase;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Balance
   * @param new_var the new value of Balance
   */
  void setBalance (void new_var)   {
      Balance = new_var;
  }

  /**
   * Get the value of Balance
   * @return the value of Balance
   */
  void getBalance ()   {
    return Balance;
  }

  /**
   * Set the value of DataBase
   * @param new_var the new value of DataBase
   */
  void setDataBase (void new_var)   {
      DataBase = new_var;
  }

  /**
   * Get the value of DataBase
   * @return the value of DataBase
   */
  void getDataBase ()   {
    return DataBase;
  }
private:


  void initAttributes () ;

};

#endif // FINANCE_H
