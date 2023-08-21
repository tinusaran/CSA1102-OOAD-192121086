
#ifndef DATA_BASE_H
#define DATA_BASE_H

#include <string>

/**
  * class Data_base
  * 
  */

class Data_base
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Data_base ();

  /**
   * Empty Destructor
   */
  virtual ~Data_base ();

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
  void Update ()
  {
  }


  /**
   */
  void Delete ()
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

  void Collection_of_All_detail;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Collection_of_All_detail
   * @param new_var the new value of Collection_of_All_detail
   */
  void setCollection_of_All_detail (void new_var)   {
      Collection_of_All_detail = new_var;
  }

  /**
   * Get the value of Collection_of_All_detail
   * @return the value of Collection_of_All_detail
   */
  void getCollection_of_All_detail ()   {
    return Collection_of_All_detail;
  }
private:


  void initAttributes () ;

};

#endif // DATA_BASE_H
