
#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>

/**
  * class university
  * 
  */

class university
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  university ();

  /**
   * Empty Destructor
   */
  virtual ~university ();

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
  void verify ()
  {
  }


  /**
   */
  void enroll ()
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

  void store_details;
  void verify_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of store_details
   * @param new_var the new value of store_details
   */
  void setStore_details (void new_var)   {
      store_details = new_var;
  }

  /**
   * Get the value of store_details
   * @return the value of store_details
   */
  void getStore_details ()   {
    return store_details;
  }

  /**
   * Set the value of verify_details
   * @param new_var the new value of verify_details
   */
  void setVerify_details (void new_var)   {
      verify_details = new_var;
  }

  /**
   * Get the value of verify_details
   * @return the value of verify_details
   */
  void getVerify_details ()   {
    return verify_details;
  }
private:


  void initAttributes () ;

};

#endif // UNIVERSITY_H
