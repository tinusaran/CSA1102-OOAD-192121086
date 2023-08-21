
#ifndef DATA_BASE_H
#define DATA_BASE_H

#include <string>

/**
  * class Data_Base
  * 
  */

class Data_Base
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Data_Base ();

  /**
   * Empty Destructor
   */
  virtual ~Data_Base ();

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
  void Add ()
  {
  }


  /**
   */
  void Delete_ ()
  {
  }


  /**
   */
  void Update ()
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

  void Collection_of_detail_of_employee;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Collection_of_detail_of_employee
   * @param new_var the new value of Collection_of_detail_of_employee
   */
  void setCollection_of_detail_of_employee (void new_var)   {
      Collection_of_detail_of_employee = new_var;
  }

  /**
   * Get the value of Collection_of_detail_of_employee
   * @return the value of Collection_of_detail_of_employee
   */
  void getCollection_of_detail_of_employee ()   {
    return Collection_of_detail_of_employee;
  }
private:


  void initAttributes () ;

};

#endif // DATA_BASE_H
